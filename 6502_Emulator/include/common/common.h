#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <stdint.h>

// 1 byte 8 bits
// using Byte8 = unsigned char;
// Updated to: Byte8 = int8_t;

// 2 byte is 16 bits
// using Byte18 = int16_t

// If we give a name, then this could potentially create duplicates in cmake cache
// Therefore adding it into this namespace giving these variables unqiueness.

namespace{
    // Byte ACCUMULATOR;
    // Byte IMMEDIATE;
    // Byte IMPLIED;
    
    // Byte RELATIVE;
    // Byte ABSOLUTE;
    // Byte ZERO_PAGE;
    // Byte ZERO_PAGE_X;
    // Byte INDIRECT;
    // Byte ZERO_PAGE_INDEXED;
    // Byte INDEXED_INDIRECT;
    // Byte INDIRECT_INDEX;
    // using Byte = unsigned char;
    using Byte8 = int8_t;
    using Byte16 = int16_t;
};
