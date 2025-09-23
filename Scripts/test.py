import argparse

from isaaclab.app import AppLauncher

# Parse Arguements
parser = argparse.ArgumentParser()
parser.add_argument("--size", type=float, default=1.0, help="Side-length of cuboid")
AppLauncher.add_app_launcher_args(parser)

args = parser.parse_args()
print(args)


# from isaacsim.core.api.objects.ground_plane import GroundPlane



# # cur_dir = os.path.dirname(os.path.abspath(__file__)) # Get current directory
# # cfg_file = cur_dir + "/" + args.config_file # Get full path for the config file, so launching from anywhere is no issue
# # cpus = args.parallels # Number of parallel simulations to run

# import isaacsim.core.utils.stage as stage_utils
# from isaacsim.core.prims import SingleArticulation
# usd_path = "/Path/To/Robots/FrankaRobotics/FrankaPanda/franka.usd"
# prim_path = "/World/envs/env_0/panda"

# # load the Franka Panda robot USD file
# stage_utils.add_reference_to_stage(usd_path, prim_path)
# # wrap the prim as an articulation
# prim = SingleArticulation(prim_path=prim_path, name="franka_panda")