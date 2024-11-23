using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

// initialize motor values for exporting
extern motor L1;
extern motor L2;
extern motor L3;
extern motor R1;
extern motor R2;
extern motor R3;
// extern motor intake;
extern motor chain;
extern motor arm;
extern digital_out clamp2;
extern controller Controller1;



void  vexcodeInit( void );