#pragma once
#include <string>
#include <type_traits>


/**
 * 
 * @brief
 * 
 * BusData interface for the use
 * 
 * - Used to carry data between thhe processor and othher components
 * - Bi-directional in the sense that carries signals from processors to other copmonents
 * -  Also carries clock pulses
 * 
*/

template<class T>
class BusData{};


class AddressBus : public BusData<AddressBus>{};


