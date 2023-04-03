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
int cont = 0, i; /* declare variables */

va_start(_print, format);
if (format != NULL) /* check if format is not null */
{
	for (i = 0; format[i] != '\0'; i++) /* Iterates format */
	{
		if (format[i] == '%') /* if the position of the character strng is a '%' char */
		{
			if (format[i + 1] != '\0') /* checks if the next caracter is not the end of the string format */
			{
				cont += print_all(format[i + 1], _print); /* the print_all function is called to match the specifier */
			}
			else
			{
				return (-1); /* if the string end without a valid especifier, return -1 */
			}
			i++;
		}
		else
		{ /* if a % char is not funded, the character is writed using the function write */
			write(1, &format[i], 1);
			cont++;
		} } }
else
{ /* if format is null, the function va_end is called to finish the list of arguments and return -1 */
va_end(_print);
	return (-1); }
va_end(_print);
return (cont);/* return the amount of caracteres printed */ }
