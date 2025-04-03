#include "mbed.h"
#include "arm_book_lib.h"

#include "motionSen.cpp"
#include "tempSen.cpp"
#include "daySen.cpp"



// --output
DigitalOut alightSource(D4);


bool alightState =true; // are the lights on or off
bool x;

int main(){
    dayInputInit();

    while(true){
        isDay(alightState);
    }
}