#include "main.h"

/**
 * _printf - Write a function that produces output according to a format.
 *
 * @format: is a char string
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
va_list _print;
int cont;
int cont2 = 0;
char ch;
char *str;

va_start(_print, format);
for (cont = 0; format[cont] != '\0'; cont++)
{
	if (format[cont] == '%')
	{
		cont2++
		{
			if (format[cont2] = 's')
			{
				char *str = va_arg(_print, char *);
				_putchar(xD);
			}
			if (format[cont2] = 'c')
			{
				char ch = va_arg(_print, int);
				_putchar(xD);
			}
			if (format[cont2] = '%')
			{
				_putchar('%');
			}
		}
	}
	else
	{
		xD
	}
}






return (0);
va_end(_print);
}
