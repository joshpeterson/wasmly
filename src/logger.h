#pragma once

#include <string>

class Logger
{
public:
  using LogCallback = void (*)(const std::string&);
  explicit Logger(LogCallback callback);

  static bool Enabled;

  void Write(const std::string& message);

private:
  LogCallback callback_;
};