import argparse
from isaaclab.app import AppLauncher

parser = argparse.ArgumentParser()
parser.add_argument("--num_envs", type=int, default=2, help="Number of environments to spawn.")
parser.add_argument("--terrain", type=str, default=None, help="Side-length of cuboid")
AppLauncher.add_app_launcher_args(parser) # This adds default IsaacSim args to parser.

args = parser.parse_args() # Parse the arguements

appLauncher = AppLauncher(args)
simulationApp = appLauncher.app


import isaaclab.sim as sim_utils
from omni.isaac.core.utils.prims import get_prim_at_path

# Define the USD file configuration
usd_file_cfg = sim_utils.USDFileCfg()
usd_file_cfg.file_path = "C:/Projects/DualDiablo/Models/IsaacSim/DualDiablo2.usd"
usd_file_cfg.prim_path = "/World/YourArticulation"

# Load the articulation
articulation_prim = get_prim_at_path(usd_file_cfg.prim_path)

# List actuators
if articulation_prim.HasAPI("Articulation"):
    actuators = articulation_prim.GetAttribute("actuators").Get()
    print("Actuators:", actuators)
else:
    print("No actuators found in the specified USD file.")