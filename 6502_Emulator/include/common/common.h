#pragma once
#include <iostream>
#include <cstring>
#include <string>

// 1 byte 8 bits
using Byte = unsigned char;

// If we give a name, then this could potentially create duplicates in cmake cache
// Therefore adding it into this namespace giving these variables unqiueness.

namespace{
    Byte ACCUMULATOR;
    Byte IMMEDIATE;
    Byte IMPLIED;
    
    Byte RELATIVE;
    Byte ABSOLUTE;
    Byte ZERO_PAGE;
    Byte ZERO_PAGE_X;
    Byte INDIRECT;
    Byte ZERO_PAGE_INDEXED;
    Byte INDEXED_INDIRECT;
    Byte INDIRECT_INDEX;

    // Enumeration of the different types of Instructions
    enum INSTRUCTIONS_SET{};
};
