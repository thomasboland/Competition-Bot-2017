#ifndef ROBOTMAP_H
#define ROBOTMAP_H

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int LEFTMOTOR = 1;
// constexpr int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int RANGE_FINDER_PORT = 1;
// constexpr int RANGE_FINDER_MODULE = 1;

// Subsystem: DriveTrain
constexpr int DRIVE_MOTOR_CONTROLLER_LF_PORT = 0; // PWM output
constexpr int DRIVE_MOTOR_CONTROLLER_LR_PORT = 1;
constexpr int DRIVE_MOTOR_CONTROLLER_RF_PORT = 2;
constexpr int DRIVE_MOTOR_CONTROLLER_RR_PORT = 3;
constexpr int DRIVE_ENCODER_L_PORT = -1; // ??
constexpr int DRIVE_ENCODER_R_PORT = -1;

// Subsystem: GearSleeve
constexpr int GEAR_PLACEMENT_SERVO_PORT = 4; // PWM output
constexpr int GEAR_POSITION_SENSOR = 0; // Analog input

// Subsystem: Winch
constexpr int WINCH_MOTOR_CONTROLLER_PORT = 5; // PWM output

// Subsystem: Vision
constexpr int CAMERA_FRONT_PORT = 0; // USB Camera ID
constexpr int CAMERA_DRIVE_PORT = 1;
constexpr int CAMERA_FRONT_LIGHT_PORT = 0; // Digital
constexpr int CAMERA_DRIVE_SERVO_PORT = 6; // PWM output


#endif  // ROBOTMAP_H
