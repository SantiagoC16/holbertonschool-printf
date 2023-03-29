#ifndef printf
#define printf

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printf - struct
 *
 * 
 *
 */

typedef struct print
{
	char *formats;
	char (*func)(va_list var);
} print;

int _printf(const char *format, ...);


#endif
