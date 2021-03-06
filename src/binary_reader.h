#pragma once

#include <cstdint>
#include <gsl>

namespace binarily
{

class BinaryReader
{
public:
  [[nodiscard]] virtual bool Exists() const = 0;

  virtual bool ReadByte(uint8_t& value) const = 0;
  [[nodiscard]] virtual int ReadBytes(gsl::span<uint8_t> buffer) const = 0;
  virtual void Reset() = 0;
};

} // namespace binarily
