#ifndef LOGGER_H
#define LOGGER_H
#ifndef FAILURE_
#define FAILURE_H
#ifndef SUCCESS_H
#define SUCCESS_H
#ifndef CHECK_H

#define CHECK_H
#define CYAN    "\033[36m"
#define RED     "\033[1m\033[31m"
#define GREEN   "\033[32m"
#define WHITE   "\033[37m"
#define RESET   "\033[0m"
#define YELLOW 	"\x1b[33m"

#include <stdio.h>
#include <unistd.h>

#define LOG_DEBUG() do { \
    printf(CYAN ">>> "WHITE "%s():\t" RESET,  __func__); \
} while(0)

#define SUCCESS(x)do { \
    printf( GREEN x RESET); \
} while (0)

#define FAILURE(x) do { \
    printf( RED x RESET); \
} while(0)

#endif
#endif
#endif
#endif
