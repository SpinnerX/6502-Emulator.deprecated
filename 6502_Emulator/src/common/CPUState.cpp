#include <common/CPUState.h>

void CPUState::initialize(){
    printf("Initializing 6502 CPU State....\n");
    // Instruction{mode/reg, op-code, }
    addressModes.insert({0xA9, new Instruction<false>{AddressModes::IMMEDIATE, static_cast<Byte8>(0xA9), -1, 2, 2}});
    addressModes.insert({0xA5, new Instruction<false>{AddressModes::ZPG, static_cast<Byte8>(0xA5), -1, 3, 2}});
    addressModes.insert({0xB5, new Instruction<false>{AddressModes::ZPG_X, static_cast<Byte8>(0xB5), -1, 4, 2}});
    addressModes.insert({0xAD, new Instruction<false>{AddressModes::ZPG_Y, static_cast<Byte8>(0xAD), -1, }});
    addressModes.insert({0x6D, new Instruction<false>{AddressModes::ABS, static_cast<Byte8>(0x6D), -1, 4, 2}});
    addressModes.insert({0x7D, new Instruction<false>{AddressModes::ABSX, static_cast<Byte8>(0x7D), -1, 4, 3}});
    addressModes.insert({0x79, new Instruction<false>{AddressModes::ABSY, static_cast<Byte8>(0x79), -1, 4, 3}});
    addressModes.insert({0x61, new Instruction<false>{AddressModes::X_IND, static_cast<Byte8>(0x61), -1, 6, 2}});
    addressModes.insert({0x71, new Instruction<false>{AddressModes::IND_Y, static_cast<Byte8>(0x71), -1, 5, 2}});

    for(auto iter = addressModes.begin(); iter != addressModes.end(); iter++){
        std::cout << iter->second << '\n';
    }
}