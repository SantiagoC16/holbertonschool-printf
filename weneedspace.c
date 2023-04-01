#include "main.h"

/**
 * character - print %c
 * @_print: va_list
 * Return: 0
 */

int character(va_list _print)
{
	char ch;

	ch = va_arg(_print, int);
	putchar(ch);
	return (0);
}

/**
 * porcentaje - print %
 * @_print: va_list
 * Return: 0
 */

int porcentaje(va_list _print)
{
	putchar('%');
	return (0);
}

/**
 * string - print %s
 * @_print: va_list
 * Return: 0
 */

int string(va_list _print)
{
	char *str;

	str = va_arg(_print, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	write(1, str, strlen(str));
	return (0);
}

/**
 *
 *
 *
 */

int print_all
