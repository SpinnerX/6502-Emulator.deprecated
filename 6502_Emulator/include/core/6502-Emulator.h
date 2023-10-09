#pragma once
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <common/Instruction.h>

/**
 * @brief 
 * 
 * Just want to initiate a state that can check if we want to turn on the emulator or not.
 * 
 * @param state 
 */

void startup(bool state);


/**
 * @brief 
 * 
 * 
 * void ExecuteEmulation(uint32_t)
 * - Starts the state of the emulation, where we input the amount of cycles it takes for a specific instruction to run.
 * 
 * @param cycles 
 */
void ExecuteEmulator(uint32_t cycles, Instruction*);