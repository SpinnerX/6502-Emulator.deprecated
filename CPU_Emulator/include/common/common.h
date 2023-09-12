#pragma once
#include <iostream>
#include <cstring>
#include <string>

// 1 byte 8 bits
using Byte = unsigned char;

namespace Address_Modes{
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
    
};