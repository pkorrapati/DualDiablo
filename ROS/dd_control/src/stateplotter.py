import threading
import time
from collections import deque
import rclpy
from matplotlib.animation import FuncAnimation
from rclpy.node import Node
from sensor_msgs.msg import JointState

#!/usr/bin/env python3

import matplotlib.pyplot as plt

BUFFER_LEN = 500
PLOT_INTERVAL_MS = 100  # update interval for matplotlib


class StatePlotter(Node):
    def __init__(self):
        super().__init__("state_plotter")
        self.sub = self.create_subscription(
            JointState, "/joint_states", self.joint_callback, 10
        )
        self.lock = threading.Lock()
        self.t_buf = deque(maxlen=BUFFER_LEN)
        self.buffers = [deque([0.0] * 0, maxlen=BUFFER_LEN) for _ in range(4)]
        self.start_time = time.time()

    def joint_callback(self, msg: JointState):
        ts = time.time() - self.start_time
        # print("Received JointState at {:.2f}s: {}".format(ts, msg))
        efforts = list(msg.effort) if msg.effort is not None else []
        with self.lock:
            self.t_buf.append(ts)
            for i in range(4):
                v = efforts[i] if i < len(efforts) else 0.0
                # ensure buffer exists
                if len(self.buffers[i]) == 0 and len(self.t_buf) == 1:
                    # initialize with one value
                    self.buffers[i].append(v)
                else:
                    self.buffers[i].append(v)


def make_plot(node: StatePlotter):
    fig, axes = plt.subplots(2, 2, figsize=(8, 6))
    axes = axes.flatten()
    lines = []
    for ax in axes:
        line, = ax.plot([], [], lw=1.5)
        ax.grid(True)
        ax.set_xlim(0, 10)
        ax.set_ylim(-1.0, 1.0)
        lines.append(line)

    fig.suptitle("DiabloAS: 4 Torque (effort) channels")

    def update(frame):
        with node.lock:
            t = list(node.t_buf)
            bufs = [list(b) for b in node.buffers]
        if not t:
            return lines
        t0 = t[0]
        t_rel = [ti - t0 for ti in t]
        # update each subplot
        for i in range(4):
            y = bufs[i] if i < len(bufs) else []
            x = t_rel[-len(y):] if y else []
            lines[i].set_data(x, y)
            ax = axes[i]
            if x:
                ax.set_xlim(max(0, x[-1] - 10), x[-1] + 0.01)
                ymin = min(y) - 0.1
                ymax = max(y) + 0.1
                if ymin == ymax:
                    ymin -= 0.5
                    ymax += 0.5
                ax.set_ylim(-30, 30)
        return lines

    ani = FuncAnimation(fig, update, interval=PLOT_INTERVAL_MS, blit=False)
    plt.tight_layout()
    plt.show()


def main():
    rclpy.init()
    node = StatePlotter()

    # spin ROS in separate thread so matplotlib mainloop can run on main thread
    spin_thread = threading.Thread(target=rclpy.spin, args=(node,), daemon=True)
    spin_thread.start()

    try:
        make_plot(node)
    finally:
        try:
            node.destroy_node()
        except Exception:
            pass
        rclpy.shutdown()
        spin_thread.join(timeout=1)


if __name__ == "__main__":
    main()