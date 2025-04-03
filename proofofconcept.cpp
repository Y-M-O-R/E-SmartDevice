#include "mbed.h"
#include "arm_book_lib.h"

// test 
// init

DigitalIn switch_user(D2);// house light switch 
DigitalIn motionSensor(BUTTON1); // pir sensor example

DigitalOut lightSource(LED1);

// decelartion of functions
void inputInit(); 
void outputInit();
bool lightState; // is the lights on or off


//DigitalIn lightSensor(D2);
//DigitalOut lightSource(D15);

//  main() runs in its own thread in the OS
int main(){
    inputInit();

    while(true){

    if (motionSensor==ON && lightState==ON){ // if motion is detected and lights are on turn them of
        lightSource= OFF;
        lightState = OFF;


    }
    if (lightState ==ON){
        lightSource= ON;
    }
    if(switch_user==ON){ // if switch on, turn lights on
        lightState = ON;
    }
    }

}

void inputInit(){ // setup buttons 
    switch_user.mode(PullDown);
}
