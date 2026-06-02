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

#include <stdio.h>
#include <unistd.h>

/* void	check(bool success) */
/* { */
/* 	if (success) */
/* 		SUCCESS(); */
/* 	else */
/* 		FAILURE(); */
/* } */

#define LOG_DEBUG(fmt, ...) do { \
    printf(CYAN ">>> %s(): " RESET,  __func__); \
} while(0)

#define CHECK(fmt, ...) do { \
    printf("\033[0;32mOK: \033[0m"); \
} while(0)

#define SUCCESS(fmt, ...) do { \
    printf( GREEN "OK " RESET); \
} while(0)

#define FAILURE(fmt, ...) do { \
    printf( RED "KO " RESET); \
    return ; \
} while(0)

#define NL(fmt, ...) do { \
	write(1, "\n", 1); \
}while(0);

#endif
#endif
#endif
#endif
