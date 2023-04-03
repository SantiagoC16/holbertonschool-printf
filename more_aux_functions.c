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

if (number < 0) /*if number is negative print char - number sign change */
{
	write(1, "-", 1);
	count++;
	number = -number; }

if (number == 0) /* if number is 0 print 0 */
{
	write(1, "0", 1);
	count++; }
else /* if number is not 0 */
{
	int num_digits = 0;
	int position = number;

	while (position != 0)/* count the amount of digits dividing by 10 number to reach 0 increasing num_digits per iteration */
	{
		num_digits++;
		position /= 10; }
		while (num_digits > 0) /* extract each digit of number, convert the digit into a char and print it with te function write, count increase 1 per digit */
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
