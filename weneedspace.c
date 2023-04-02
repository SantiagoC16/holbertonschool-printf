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
	_putchar(ch);
	return (1); }
/**
 * porcentaje - print %
 * @_print: va_list
 * Return: 0
 */
int porcentaje(__attribute__ ((unused)) va_list _print)
{
	write(1, "%", 1);
	return (1); }
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
	return (strlen(str)); }
/**
 * numbers -print %d and %i
 * @_print: va_list
 * Return: 0
 */
int numbers(va_list _print)
{
int count = 0, a, b, num = 0;

if (num >= 0)
{
	a = num; }
	while (a != 0)
	{
		b = a % 10;
		_putchar(b + 48);
		a = a / 10;
		count++; }
if (num < 0)
{
	_putchar('-');
	count++;
	while (a != 0)
	{
		b = a % 10;
		_putchar((b * -1) + 48);
		a = a / 10;
		count++; } }
return (count); }
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
{'c', character},
{'%', porcentaje},
{'s', string},
{'i', numbers},
{'d', numbers},
{'\0', NULL}, };
while (keys[compare].type)
{
	if (x == keys[compare].type)
	{
		return (keys[compare].f(_print));
	compare++;
if (!keys[compare].type)
{
	write(1, "%", 1);
	write(1, &x, 1);
	return (2); } } }
return (0); }
