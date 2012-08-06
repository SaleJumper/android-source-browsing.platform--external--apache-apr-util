// Added to make the code easier to compile on multiple platforms

#ifdef __APPLE__
#include "apu_mac.h"
#elif defined(WIN32) || defined(_WIN32)
#include "apu.hw"
#else
ERROR !!! UNSUPPORTED PLATFORM
#endif
