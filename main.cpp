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
    while(true){
        isDay(alightState);
    }
}



// use this function to read from a file and modifyf certain variables
void userFile();

void userFIle(){
    daySenEnable = true;
}