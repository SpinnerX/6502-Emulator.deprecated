#pragma once
#include "common/common.h"
#include <stdio.h>
#include <array>

/**
 * 
 * 
 * General memory implementation. This is how we are emulating how memory is going to be read, written, and even accessed.
 * 
 * Struct should know and be aware of the following
 * 
 * - zero page
 * - stack
 * - memory data
 * - the last 6 significant bytes, because since the 6502 is little endian architecture.
 * 
*/

struct Memory{
    // static constexpr int TOTAL_MAX_MEMORY = 1024 * 64;

    // allowing to intilize the memory to default
    // As well, allowing us to load in memory to it's initial state.
    void initialize();
    void load(std::string filename);

    std::array<Byte, 100> zeroPage;
    std::array<Byte, 100> stack;
    std::array<Byte, 6> lastSixSignifBytes;
    std::array<Byte, (1024 * 64) - 206> memoryData;
};