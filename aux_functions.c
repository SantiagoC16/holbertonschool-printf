#include "main.h"
/**
 * character - print %c
 * @_print: va_list
 * Return: 0
 */
int character(va_list _print)
{
	char ch; /* define variabel ch */

	ch = va_arg(_print, int); /*initializate with the next argument in the list argument _print */
	_putchar(ch); /* call the function _putchar sending ch as parameter and return 1 */
	return (1); }
/**
 * porcentaje - print %
 * @_print: va_list
 * Return: 0
 */
int porcentaje(__attribute__ ((unused)) va_list _print)
{
	write(1, "%", 1); /* print character % calling the function write */
	return (1); }
/**
 * string - print %s
 * @_print: va_list
 * Return: 0
 */
int string(va_list _print)
{
	char *str;
int size, count = 0, i;

	str = va_arg(_print, char *); /* initializate str with the next argument in thelist of arguments _print */
	if (str == NULL)
	{
		str = "(null)"; /* if str null, str is (null) string */
	}
	size = strlen(str); /* take the size of str string */
	for (i = 0; i < size; i++) /* iterates str and print the character in evrery position of the string with the function write */
	{
	write(1, &str[i], 1);
	count++; /* count increase 1 */ }
	return (count); }
