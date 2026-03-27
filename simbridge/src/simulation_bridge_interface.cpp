#include "simulation_bridge_interface.hpp"
#include "simulation_bridge.hpp"

SimulationBridgeInterface::SimulationBridgeInterface( RobotType robot, RobotController* robot_ctrl, bool load_parameters_from_file ) {
    bridge_ = new SimulationBridge( robot, robot_ctrl, load_parameters_from_file );
}

SimulationBridgeInterface::~SimulationBridgeInterface() {
    delete bridge_;
}

void SimulationBridgeInterface::Run() {
    bridge_->Run();
}

void SimulationBridgeInterface::HandleControlParameters() {
    bridge_->HandleControlParameters();
}

void SimulationBridgeInterface::RunRobotControl() {
    bridge_->RunRobotControl();
}
