#pragma once

#include "ABI40_0_0LoggerInterface.h"
#include <memory>

namespace ABI40_0_0reanimated
{

class Logger {
  public:
  template<typename T>
    static void log(T value) {
      if (instance == nullptr) {
        throw std::runtime_error("no logger specified");
      }
      instance->log(value);
    };
  private:
    static std::unique_ptr<LoggerInterface> instance;
};

}
