#ifndef CHECK_H
#define CHECK_H

#include <stdio.h>

#define CHECK(fmt, ...) do { \
    printf("\033[0;32mOK: \033[0m"); \
} while(0)

#endif

