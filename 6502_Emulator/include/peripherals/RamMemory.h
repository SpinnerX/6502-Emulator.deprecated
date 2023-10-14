#pragma once
#include "Devices.h"

/**
 * 
 * RAM  Memory is a type of device
 * 
 * - Reads/Writes/Accesses from memory
 * 
*/

class RamMemory : public Device<RamMemory> {
public:
    RamMemory() = default;
    RamMemory(std::size_t size) : size(size) {}

    /**
     * 
     * @note
     * 
     * Reading/Writing/Accessing from specific memory areas (in this case being ROM Memory)
     * 
    */
    void read() override;

    void write() override;

private:
    std::size_t size; // size of memory RAM has for this area
};