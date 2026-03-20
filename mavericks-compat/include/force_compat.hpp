#ifndef __ASSEMBLER__
#ifndef FORCE_COMPAT_HPP
#define FORCE_COMPAT_HPP
#include <time.h>
#include <sys/time.h>

extern "C" {
    #ifndef _CLOCKID_T
    #define _CLOCKID_T
    #endif
    struct timespec;
    int clock_gettime(int clock_id, struct timespec *tp);
}
#endif
#endif
