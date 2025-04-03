#include "mbed.h"
#include "arm_book_lib.h"

/*
Motion Sensor SubSystem:
 1. If light on and no motion within X seconds turn Light on/off
 2. Adjust X with code
 3. Turn Light on when Motion detected (Feature)
 4. Dim Lights if not motion within X seconds till off (Feature)
 5. Disable Motion Sensor 
*/

// init  %%%%%%%%% change nucleo pins
// --input
DigitalIn hSwitch(D2); // house switch
DigitalIn motionSen(D3); // pir, motion sensor
// --output
DigitalOut lightSource(D4); // house bulb

// decelartion of global variables
bool lightState; // are the lights on or off
int timeOut; // the time  before motion sensor needs rettrigering 

// decelartion of  functions

void aainputInit();
void aaoutputInit();

int mainaa(){
    aainputInit();
    while(true){

    }

}

void aainputInit(){
    hSwitch.mode(PullDown);
}