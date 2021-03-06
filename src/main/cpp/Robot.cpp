#include "Robot.h"
#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>

// Robot Logic (runs when robot is on regardless of below functions)
void Robot::RobotInit() {
	// init controllers and motors in here
	leftF = new rev::CANSparkMax(0, rev::CANSparkMax::MotorType::kBrushed);
	leftB = new rev::CANSparkMax(1, rev::CANSparkMax::MotorType::kBrushed);
	rightF = new rev::CANSparkMax(2, rev::CANSparkMax::MotorType::kBrushed);
	rightB = new rev::CANSparkMax(3, rev::CANSparkMax::MotorType::kBrushed);

}

void Robot::RobotPeriodic() {
	// Constantly looping code after robot has turned on. (Cannot control motors in here as they are locked until teleop/auto/test is started)
}

// Dissabled Robot Logic
void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

// Auto Robot Logic
void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

// Manual Robot Logic
void Robot::TeleopInit() {
	// Might want to zero encoders or something when you start teleop
}
void Robot::TeleopPeriodic() {
	// Looping code for teleop. (Press button A finds Tom and shoots a ball into his face?)

	std::cout << "Hello world. From robot!!" << std::endl;
	leftF->Set(0.2);
	leftB->Set(0.2);
	rightF->Set(-0.2);
	rightB->Set(-0.2);
}

// Test Logic 
void Robot::TestInit() {}
void Robot::TestPeriodic() {}




/**
 * Don't touch these lines
 */
#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
