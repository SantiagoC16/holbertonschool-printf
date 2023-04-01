#ifndef print
#define print

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - struct 
 * @type: c
 * @f: function
 */

typedef struct print
{
	char type;
	int (*f)(va_list types);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_all(char x, va_list _print);
int character(va_list _print);
int string(va_list _print);
int porcentaje(va_list _print);

#endif
