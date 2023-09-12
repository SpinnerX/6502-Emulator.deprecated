#pragma once
#include "common/common.h"
#include <string>

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
    Byte cyclesPerInstruction;              // Amount of cycles it takes for this instruction to run
    Byte mode;                              // Instruction specific address mode
    Byte opCodes;                           // Instructions specific op code
    std::string name;                       // name of the instruction
};