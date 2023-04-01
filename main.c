#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int len;
__attribute__((unused)) int len2;
unsigned int ui;
void *addr;

len = _printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", len, len);
_printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
_printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
_printf("Address:[%p]\n", addr);
len = _printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
_printf("Unknown:[%r]\n");
return (0);
}
