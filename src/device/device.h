#pragma once
#include <stdint.h>

namespace device {
enum class Bit : uint8_t { cleared = 0, set = 1 };
class Device {
   public:
    virtual ~Device(){};
    virtual void step() = 0;
    virtual uint8_t read(uint32_t address) = 0;
    virtual void write(uint32_t address, uint8_t data) = 0;
};
}