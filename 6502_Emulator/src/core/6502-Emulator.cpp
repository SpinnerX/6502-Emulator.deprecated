#include <core/6502-Emulator.h>


void bootup6502CPU(bool state){
    if (state){
        printf("Initiating 6502 Emulation!\n");
    }
}


void ExecuteEmulator(uint32_t cycles, State state){
    State cpuState = State::OFF;
    
    if(state == START){
        cpuState = RUNNING;
    }


    while(cpuState == RUNNING){
        printf("CPU Running....\n");
    }
}