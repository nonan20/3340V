/* IGNORE ALL CODE UNTIL LINE 12 */

#include "vex.h" 

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain Brain;

/* IMPORTANT CODE BEGINS HERE */

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:

// ** Motor Initialization + Port Linking (PORT#, gear ratio, reversed?) **
// Note: motors must also be initialized on robot-config.h

// LEFT Drivetrain
motor L1 = motor (PORT15, ratio36_1, true); /* FRONT Left Motor*/
motor L2 = motor (PORT12, ratio36_1, true); /* MIDDLE Left Motor */
motor L3 = motor (PORT11, ratio36_1, false); /* TOP Left Motor */

// RIGHT Drivetrain
motor R1 = motor (PORT9, ratio36_1, false); /* FRONT Right Motor */
motor R2 = motor (PORT10, ratio36_1, false); /* MIDDLE Right Motor */
motor R3 = motor (PORT20, ratio36_1, true); /* TOP Right Motor */

// Auxiliary Motors
// motor intake = motor (PORT20, ratio18_1, false); /* Intake Motor*/
motor chain = motor(PORT1, ratio36_1, false); /* Chain Motor */

digital_out clamp2 = digital_out(Brain.ThreeWirePort.H);
motor arm = motor(PORT19, ratio18_1, false);
//Controller
controller Controller1 = controller(primary);


void vexcodeInit( void ) {
  // nothing to initialize
};


