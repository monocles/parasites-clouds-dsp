// Stub for Daisy/STM32H7 — replaces the STM32F4-specific original.
#ifndef CLOUDS_DRIVERS_DEBUG_PIN_H_
#define CLOUDS_DRIVERS_DEBUG_PIN_H_

#include "stmlib/stmlib.h"

namespace clouds {

class DebugPin {
 public:
  DebugPin() { }
  ~DebugPin() { }
  static void Init() { }
  static inline void High() { }
  static inline void Low() { }
 private:
  DISALLOW_COPY_AND_ASSIGN(DebugPin);
};

#define TIC
#define TOC

}  // namespace clouds

#endif  // CLOUDS_DRIVERS_DEBUG_PIN_H_
