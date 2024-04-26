#pragma once
#include <stdint.h>
#include "cpu.h"

class Bus {
public:
    Bus();      // Constructor
    ~Bus();     // Destructor

    // Devices connected to the bus
    CPU cpu;
    uint8_t ram[1024 * 64];  // 64kb

    void Write(uint16_t address, uint8_t value);
    uint8_t Read(uint16_t address, bool ReadOnly = false);
};
