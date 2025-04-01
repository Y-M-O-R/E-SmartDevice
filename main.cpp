#include "mbed.h"
#include "arm_book_lib.h"


// init

DigitalIn switch_user(D2);
DigitalIn motionSensor(BUTTON1);

DigitalOut lightSource(LED1);

// decelartion of functions
void inputInit();
void outputInit();
bool lightState;


//DigitalIn lightSensor(D2);
//DigitalOut lightSource(D15);

//  main() runs in its own thread in the OS
int main(){
    inputInit();

    while(true){

    if (motionSensor==ON && lightState==ON){
        lightSource= OFF;
        lightState = OFF;


    }
    if (lightState ==ON){
        lightSource= ON;
    }
    if(switch_user==ON){
        lightState = ON;
    }
    }

}

void inputInit(){
    switch_user.mode(PullDown);
}
