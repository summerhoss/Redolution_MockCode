#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>

#include <WPILib.h>
#include "ctrlib/CANTalon.h"
#include "Commands/Subsystem.h"

class DriveTrain: public Subsystem {
private:

	CANTalon* left;
	CANTalon* right;
	int ticksToDistance;

public:

	DriveTrain();
	~DriveTrain();

	static float Limit(float num, float max);

	void setMult(float m);
	void reverseDrive();
	int getMult();
	void arcadeDrive(float move, float rotate);
	void tankDrive(float moveValueLeft, float moveValueRight);

	double getDistance();

	void setSpeedLeft(double speed);
	void setSpeedRight(double speed);   //if needed

	void InitDefaultCommand();

	//void SetReverse();
	float mult;
};

#endif

