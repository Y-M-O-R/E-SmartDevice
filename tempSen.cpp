#include "mbed.h"
#include "arm_book_lib.h"

/*
Heat Sensor:
 1. If temp here then x(*c) turn Heater off <==
 2. Adjust (*c)                             <==
 3. Disable Sensor  %% just need to be able to externally modify var
*/

// init  %%%%%%%%% change nucleo pins
// --input
AnalogIn tempSen(D2); // thermistor used to meausre temp

// --output
DigitalOut heat(D4);


// decelartion of global variables

float tempRead = 0.0;
float tempSet = 18.0; 
bool tempSenEnable = true;


// decelartion of  functions
void isHot(bool &heatState);

void isHot(bool &heatState){
    if(tempSenEnable){
        tempRead = tempSen.read();
        if(tempRead >= tempSet){
            if(heatState){
                heatState = false;
            }
            
        }
    }
}

