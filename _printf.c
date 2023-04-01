#include <stdio.h>
#include <string.h>
#include <stdarg.h>
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
int cont, i;

va_start(_print, format);
if (format != NULL)
{
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				cont += print_all(format[i + 1], _print);
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			_putchar(format[i]);
			cont++;
		} } }
else
{
	return (-1); }
va_end(_print);
return (cont); }
