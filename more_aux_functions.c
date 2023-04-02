#include "main.h"

/**
 * numbers - print numbers
 * @_print: va_list
 * Return: 0
 */

int numbers(va_list _print)
{
int count = 0, i, digit;
int number = va_arg(_print, int);
char print_char;

if (number < 0)
{
	write(1, "-", 1);
	count++;
	number = -number; }

if (number == 0)
{
	write(1, "0", 1);
	count++; }
else
{
	int num_digits = 0;
	int position = number;

	while (position != 0)
	{
		num_digits++;
		position /= 10; }
		while (num_digits > 0)
		{
			int divisor = 1;

			for (i = 1; i < num_digits; i++)
			{
			divisor *= 10; }
			digit = number / divisor;
			print_char = digit + '0';

			write(1, &print_char, 1);
			count++;
			number %= divisor;
			num_digits--; } }
return (count); }
