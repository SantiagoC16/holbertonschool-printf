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
while (keys[compare].type)
{
	if (*(keys[compare].type) == x)
	{
		return (keys[compare].f(_print)); }
		compare++; }
if (!keys[compare].type)
{
	write(1, "%", 1);
	write(1, &x, 1);
	return (2); }
return (0); }
