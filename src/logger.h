#pragma once

#include <string>

class Logger
{
public:
  typedef void (*LogCallback)(const std::string&);
  Logger(LogCallback callback);

  static bool Enabled;

  void Write(const std::string& message);

private:
  LogCallback callback_;
};
