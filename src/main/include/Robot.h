#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <rev/CANSparkMax.h>


class Robot : public frc::TimedRobot {
public:
	// Public stuff
	void RobotInit() override;
	void RobotPeriodic() override;

	void AutonomousInit() override;
	void AutonomousPeriodic() override;

	void TeleopInit() override;
	void TeleopPeriodic() override;

	void DisabledInit() override;
	void DisabledPeriodic() override;

	void TestInit() override;
	void TestPeriodic() override;

private:
	// private stuff
	rev::CANSparkMax *leftF;
	rev::CANSparkMax *leftB;
	rev::CANSparkMax *rightF;
	rev::CANSparkMax *rightB;

};
