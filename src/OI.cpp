#include "OI.h"

#include <WPILib.h>

using namespace frc;

OI::OI() : leftStick(new Joystick(2)), rightStick(new Joystick(1))  {
	//check arguments
}

OI::~OI()
{
	delete rightStick;
	delete leftStick;
}

Joystick* OI::getDriveStickLeft() {
	return leftStick;
}

Joystick* OI::getDriveStickRight() {
	return rightStick;
}
