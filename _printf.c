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
int print_null(void)
{
  int i, count = 0;
  char nothing[] = "(null)";
  for (i = 0; i < 6; i++)
    {
      putchar(nothing[i]);
      count++;
    }
  return (count);
}

  int _printf(const char *format, ...)
  {
    va_list _print;
    int cont, i, cont2 = 0, skip = 0, size, amount = 0;
    char *str = NULL;
    va_start(_print, format);
    for (cont = 0; format[cont] != '\0'; cont++)
      {
	cont2++;
	if (format[cont] == '%' && amount == 0)
	  {
	    switch (format[cont + 1])
	      {
	      case 's':
		cont2 -= 2;
		str = va_arg(_print, char *);
		if (str != NULL)
		  {
		    size = strlen(str);
		    for (i = 0; i < size; i++)
		      {
			cont2++;
			putchar(str[i]);
		      }
		  }
		else
		  cont2 += print_null();
		skip = 1;
		break;
	      case 'c':
		putchar(va_arg(_print, int));
		skip = 1;
		cont2--;
		break;
	      case '%':
		amount++;
		cont2--;
		putchar('%');
		skip = 1;
		break;
	      case ' ':
		return (-1);
	      }
	  }
	else if (skip != 1)
	  {
	    putchar(format[cont]);
	    if (format[cont + 1] == '%')
	      amount = 0;
	  }
	else if (skip == 1)
	  skip = 0;
      }
    return (cont2);
    va_end(_print);
 }
