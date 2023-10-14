#pragma once
#include "Devices.h"

/**
 * 
 * @note
 * 
 * RomMemory class that uses Devices interface
 * ROM (Read-Only-Memory)
 * - Is read-only memory
 * - software/hardware fetches data/instructions from this ROM to be executed
 * -  Read-only meaning, data may not be modified.
*/
class RomMemory : public Device<RomMemory> {
public:
    RomMemory() = default;
    RomMemory(std::size_t size) : size(size) {}
    ~RomMemory() = default;

    /**
     * 
     * @note
     * 
     * Reading/Accessing from specific memory areas (in this case being ROM Memory)
     * 
    */
    void read() override;

private:
    // Does nothing since ROMs memory is read-only
    void write() override;

private:
    std::size_t size; // size of memory ROM has for this area

};