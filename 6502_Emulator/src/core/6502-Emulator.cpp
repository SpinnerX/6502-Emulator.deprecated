#include <core/6502-Emulator.h>


void startup(bool state){
    if (state){
        std::cout << "Initiating 6502 Emulation!\n";
    }
}

void ExecuteEmulator(uint32_t cycles, Instruction* instruction){
    std::cout << "Executing the Emulator\n";
    // Basically what we should also do is compute how many cycles should be running, just so we can compute that into the cycles var.
    // This allows the loop to run a specific amount until we finish running those instructions
    while(cycles > 0){
        std::cout << "Running cycles #" << cycles << "!!!\n";
        cycles--;
    }
}