import argparse
from isaaclab.app import AppLauncher

parser = argparse.ArgumentParser()
parser.add_argument("--num_envs", type=int, default=2, help="Number of environments to spawn.")
parser.add_argument("--terrain", type=str, default=None, help="Side-length of cuboid")
AppLauncher.add_app_launcher_args(parser) # This adds default IsaacSim args to parser.

args = parser.parse_args() # Parse the arguements

appLauncher = AppLauncher(args)
simulationApp = appLauncher.app

## Following only works after the app is running

import torch

import isaaclab.sim as sim_utils
import isaacsim.core.utils.prims as prim_utils

from isaaclab.actuators import ImplicitActuatorCfg
from isaaclab.assets import ArticulationCfg, AssetBaseCfg
from isaaclab.scene import InteractiveScene, InteractiveSceneCfg
from isaaclab.utils.assets import ISAAC_NUCLEUS_DIR
from isaaclab.utils import configclass

@configclass
class DiabloSceneCfg(InteractiveSceneCfg):
    # ground plane material
    # groundPlaneMaterial = AssetBaseCfg(prim_path="/Materials/GroundPlaneMaterial", spawn=sim_utils.RigidBodyMaterialCfg(static_friction=1, dynamic_friction=1, restitution=0))
    # ground plane
    ground = AssetBaseCfg(
        prim_path="/World/GroundPlane", 
        spawn=sim_utils.GroundPlaneCfg(usd_path=f"{ISAAC_NUCLEUS_DIR}/Environments/Grid/default_environment.usd", 
                                       physics_material=sim_utils.RigidBodyMaterialCfg(static_friction=1, dynamic_friction=1, restitution=0)))

    # lights
    dome_light = AssetBaseCfg(
        prim_path="/World/DefaultLight", 
        spawn=sim_utils.DomeLightCfg(intensity=3000.0, color=(1.0, 1.0, 1.0))
    )

    robot = ArticulationCfg(prim_path="/World/DualDiablo", 
                            spawn=sim_utils.UsdFileCfg(usd_path="C:/Projects/DualDiablo/Models/IsaacSim/DualDiablo3.usd"),
                                                    #    rigid_props=sim_utils.RigidBodyPropertiesCfg(disable_gravity=False, max_depenetration_velocity=5.0),
                                                    #    articulation_props=sim_utils.ArticulationRootPropertiesCfg(enabled_self_collisions=False)), 
                            actuators={
                                "wheel_l_front": ImplicitActuatorCfg(
                                joint_names_expr=["Joint*"], 
                                effort_limit_sim=100.0, 
                                velocity_limit_sim=100.0, 
                                stiffness=0, 
                                damping=100.0),

                                # "wheel_r_front": ImplicitActuatorCfg(
                                # joint_names_expr=["Joint_R_Wheel_D_01"], 
                                # effort_limit_sim=100.0, 
                                # velocity_limit_sim=100.0, 
                                # stiffness=0, 
                                # damping=100.0),

                                # "wheel_l_rear": ImplicitActuatorCfg(
                                # joint_names_expr=["Joint_L_Wheel_D"], 
                                # effort_limit_sim=100.0, 
                                # velocity_limit_sim=100.0, 
                                # stiffness=0, 
                                # damping=100.0),

                                # "wheel_r_rear": ImplicitActuatorCfg(
                                # joint_names_expr=["Joint_R_Wheel_D"],                                 
                                # stiffness=0, 
                                # damping=100.0),

                                "hip_l_front": ImplicitActuatorCfg(
                                joint_names_expr=["Joint_L_Hip_D_01"], 
                                effort_limit_sim=5000.0, 
                                velocity_limit_sim=100.0, 
                                stiffness=1000, 
                                damping=1),

                                "hip_r_front": ImplicitActuatorCfg(
                                joint_names_expr=["Joint_R_Hip_D_01"], 
                                effort_limit_sim=5000.0, 
                                velocity_limit_sim=100.0, 
                                stiffness=1000, 
                                damping=1),

                                "hip_l_rear": ImplicitActuatorCfg(
                                joint_names_expr=["Joint_L_Hip_D"], 
                                effort_limit_sim=5000.0, 
                                velocity_limit_sim=100.0, 
                                stiffness=1000, 
                                damping=1),

                                "hip_r_rear": ImplicitActuatorCfg(
                                joint_names_expr=["Joint_R_Hip_D"], 
                                effort_limit_sim=5000.0, 
                                velocity_limit_sim=100.0, 
                                stiffness=1000, 
                                damping=1)


                                })


def run_simulator(sim: sim_utils.SimulationContext, scene: InteractiveScene):
    sim_dt = sim.get_physics_dt()
    sim_time = 0
    count = 0 # Not needed
    

    # Simulate physics
    while simulationApp.is_running():
        # pass
        # perform step
        sim.step()
        scene.update(sim_dt)

def setEnvironment():           
    # Create and initialize the Physics Scene context
    # defaultMaterial = sim_utils.RigidBodyMaterialCfg(static_friction=1, dynamic_friction=1, restitution=0)
    # defaultMaterial.func("/Materials/DefaultMaterial", defaultMaterial)

    simCFG = sim_utils.SimulationCfg(device=args.device, physics_prim_path="/PhysicsScene", dt=0.001, 
                                      physx=sim_utils.PhysxCfg(solver_type=1), render=sim_utils.RenderCfg(enable_shadows=False))
    sim = sim_utils.SimulationContext(simCFG)
    
    # Set main camera
    sim.set_camera_view([2.5, 2.5, 2.5], [0.0, 0.0, 0.0])

    print(sim_utils.UsdFileCfg(usd_path="C:/Projects/DualDiablo/Models/IsaacSim/DualDiablo.usd"))
    pass

    scene_cfg = DiabloSceneCfg(num_envs=args.num_envs, env_spacing=2.0)
    scene = InteractiveScene(scene_cfg)
    
    # Play the simulator
    sim.reset()
    
    # Now we are ready!
    print("[INFO]: Setup complete...")

    run_simulator(sim=sim, scene=scene)

    # # Simulate physics
    # while simulationApp.is_running():
    #     # pass
    #     # perform step
    #     sim.step()


if __name__ == "__main__":
    # run the main function
    setEnvironment()
    # close sim app
    simulationApp.close()