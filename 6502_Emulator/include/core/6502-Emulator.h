#pragma once
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <common/State.h>

/**
 * @brief 
 * 
 * Just want to initiate a state that can check if we want to turn on the emulator or not.
 * 
 * @param state 
 */

void bootup6502CPU(bool state);


/**
 * @brief 
 * 
 * 
 * void ExecuteEmulation(uint32_t)
 * - Starts the state of the emulation, where we input the amount of cycles it takes for a specific instruction to run.
 * - We switch the state to ON
 * @param cycles 
 */
void ExecuteEmulator(uint32_t cycles, State state);