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
int size, count = 0, i;

	str = va_arg(_print, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	size = strlen(str);
	for (i = 0; i < size; i++)
	{
	write(1, &str[i], 1);
	count++; }
	return (count); }
/**
 * numbers -print %d and %i
 * @_print: va_list
 * Return: 0
 */
int numbers(va_list _print)
{
int count = 0, a, b, i, negative = 0, number = va_arg(_print, int);

if (number >= 0)
{
	a = number;
	while (a != 0)
	{
		b = a % 10;
		number[i] = b + 48;
		a = a / 10;
		count++;
		i++; } }
if (number < 0)
{
	a = number * -1;
	negative = 1;
	while (a != 0)
	{
		b = a % 10;
		number[i] = b + 48;
		a = a / 10;
		count++;
		i++; } }
if (negative == 1)
{
	write(1, "-", 1);
	count++; }
	while (i > 0)
	{
		i--;
		write(1, &number[i], 1); }
return (count); }
