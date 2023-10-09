#pragma once
#include <string>
#include <common/common.h>
/**
 * 
 * Generic Instruction, that will handle how instructions are supposed to work.
 * 
 * Each instructions has the following
 * - Cycles (amount of cycles each instruction takes)
 * - OP Codes Type
 * - Address Mode
 * 
*/


/**
 * 
 * External notes
 * 
 * - void reset() is resetting the process
 * 
*/

struct Instruction{
    Byte cyclesAmountInstruction;            // Amount of cycles it takes for this instruction to run
    Byte mode;                              // Instruction specific address mode
    Byte opCodes;                           // Instructions specific op code
    std::string instructionID;              // name of the instruction
};