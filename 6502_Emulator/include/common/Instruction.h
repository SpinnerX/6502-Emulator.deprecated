#pragma once
#include <string>
#include <common/common.h>
#include <common/types.h>

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


template<bool B=true, typename T = Byte8>
struct Instruction{};



/**
 * @note that using template specialization may not be the best option
 * @note may change how this mechanism works, in the future.
 *  
 * This instruction will be defaulted to 1 byte = 8 bits. If the instruction is 16 bytes = 128 bits
 * true = RegisterType, false = Address Mode
*/
template<>
struct Instruction<true>{
    using Register_t = RegisterTypes;


    Register_t instructionsID;                                      // name of the instruction   (also the ID to know what instruction this is)
    Byte8 opCodes;                                                  // Instructions specific op code
    Byte8 addressMode;                                              // Instruction specific address mode, -1 would be considered default (for the time being)
    Byte8 cyclesAmountInstruction;                                  // Amount of cycles it takes for this instruction to run
    Byte8 byteSize;                                                 // Size of bytes this instruction takes
};

template<>
struct Instruction<false> {
    using Address_t = AddressModes;

    bool operator==(const Address_t mode) const {
        return (instructionsID == mode);
    }


    std::ostream& operator<<(std::ostream& outs){
        outs << "Instructions ID: ";
        switch (instructionsID){
        case AddressModes::IMMEDIATE:
            outs << "IMMEDIATE\n";
            break;
        case AddressModes::ZPG:
            outs << "ZERO PAGE\n";
            break;
        case AddressModes::ZPG_X:
            outs << "ZERO PAGE X\n";
            break;
        case AddressModes::ZPG_Y:
            outs << "ZERO PAGE Y\n";
            break;
        case AddressModes::ABS:
            outs << "ABSOLUTE\n";
            break;
        case AddressModes::ABSX:
            outs << "ABSOLUTE X\n";
            break;
        case AddressModes::ABSY:
            outs << "ABSOLUTE Y\n";
            break;
        case AddressModes::X_IND:
            outs << "\"X, INDEX\"\n";
            break;
        case AddressModes::IND_Y:
            outs << "\"INDEX, Y\"\n";
            break;
        default:
            outs << "DEFAULT\n";
            break;
        }

        outs << "Op: " << opCodes << '\n'
             << "Address Modes: " << addressMode << '\n'
             << "Cycles: " << cyclesAmountInstruction << '\n'
             << "Bytes: " << byteSize << '\n';
        
        return outs;
    }

    Address_t instructionsID;                                       // name of the instruction   (also the ID to know what instruction this is)
    Byte8 opCodes;                                                  // Instructions specific op code
    Byte8 addressMode;                                              // Instruction specific address mode, -1 would be considered default (for the time being and if the instruction itself is a address mode)
    Byte8 cyclesAmountInstruction;                                  // Amount of cycles it takes for this instruction to run
    Byte8 byteSize;                                                 // Size of bytes this instruction takes
    Byte8 values;                                                   // Values that'll be assigned to this instruction (if assigned, and -1 is default)
};