using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern rotation LTrack;
extern rotation RTrack;
extern motor LMotor;
extern motor RMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );