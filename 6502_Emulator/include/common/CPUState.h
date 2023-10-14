#pragma once
#include <cstring>
#include <string>
#include <common/Instruction.h>
#include <array>
#include <map>

/**
 * @brief
 * 
 * Representing the state the CPU will be in
 * - Including how to handle different states, depending on the given instructions
 * - Whhen the CPU executes, we will use this class to understand the state the CPU is in
 * - Including look up tables in the execution to run instructions.
 * 
*/

struct CPUState{
private:

    // Treating these status flags as bitfields
    // SR Flags (bit 7 to bit 0)
    // To see what each SR flag represent, check the link for more info: https://www.masswerk.at/6502/6502_instruction_set.html
    struct StatusFlags{
        Byte8 N; // ....    Negative
        Byte8 V; // ....    Overflow
        Byte8 B; // ....    Break
        Byte8 D; // ....    Decimal (use BCD for arithmetics)
        Byte8 I; // ....    Interrupt (IRQ Disabled)
        Byte8 Z; // ....    Zero
        Byte8 C; // ....    Carry
    };
public:

    void initialize();

private:
    // The idea is use the op-codes, to allow the emulator to know what instructions to execute
    // Using std::map<ByteSize, Instruction<bool, T> > as our interpretation of a lookup table.
    std::map<Byte8, Instruction<true> *> instructions; // contains specific op-codes and the instructions corresponding to those instructions
    std::map<Byte8, Instruction<false> *> addressModes; // same thing but only containing address modes
};