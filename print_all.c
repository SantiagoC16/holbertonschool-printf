#include "main.h"

/**
 * print_all - print
 * @x: is a char
 * @_print: va_list
 * Return: 0
 */
int print_all(char x, va_list _print)
{
int compare = 0;

print_t keys[] = {
{"c", character},
{"s", string},
{"i", numbers},
{"d", numbers},
{"%", porcentaje},
{NULL, NULL}, };
while (keys[compare].type) /* Iterate the array of estrucutre */
{
	if (*(keys[compare].type) == x) /* compare the recived specifier with the stored in the structure, if matches call the function stored in member f of the structure */
	{
		return (keys[compare].f(_print)); }
		compare++; }
if (!keys[compare].type) /* if a specifier character is not found, print the character % and the character recived */
{
	write(1, "%", 1);
	write(1, &x, 1);
	return (2);/*return the the length of character % and char x recived*/ }
return (0); }
