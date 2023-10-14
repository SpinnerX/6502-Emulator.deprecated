#pragma once
#include <cstring>
#include <cstdlib>
#include <type_traits>
#include <array>

/**
 * @note START:
 * 
 * Device interface
 * -  Class is to act as an interfac, so we can create multiple devices, and know that these devices are template specialization of type "device"
 * - Idea when looking into this device is how will we take IO from different external devices.
 * 
*/


template<typename T>
class Device{
public:
    Device() = default;

    [[noreturn]] constexpr inline virtual void read() = 0; //  read memory
    [[noreturn]] constexpr inline virtual void write() = 0; // access memory

private:
    // std::array<int, int> memoryData;
};