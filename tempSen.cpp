#include "mbed.h"
#include "arm_book_lib.h"

/*
Heat Sensor:
 1. If Hot(*c) turn Heater off
 2. Adjust (*c)
 3. Disable Sensor
*/

// init  %%%%%%%%% change nucleo pins
// --input
DigitalIn tempSen(D2); // thermistor used to meausre temp

// --output
DigitalOut heat(D4);


 // decelartion of global variables
bool heatState; // are the heaters on or off

// decelartion of  functions

void inputInit();
void outputInit();

int mainaaa(){
    inputInit();
    while(true){
        
    }
}

void inputInit(){
    tempSen.mode(PullDown);
}