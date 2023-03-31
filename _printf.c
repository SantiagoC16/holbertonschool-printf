#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <main.h>
/**
 * _printf - Write a function that produces output according to a format.
 *
 * @format: is a char string
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
  va_list _print;
  int cont;
  int i;
  int cont2 = 0;
  int skip = 0;
  char ch;
  char *str;

  va_start(_print, format);
  for (cont = 0; format[cont] != '\0'; cont++)
    {
      cont2++;
      if (format[cont] == '%')
	{
	  if (format[cont+1] == 's')
	    {
	      cont2 -= 2;
	      char *str = va_arg(_print, char *);
	      int size = strlen(str);
	      for (i = 0; i < size; i++)
		{
		  cont2++;
		  putchar(str[i]);
		}
	    }
	  if (format[cont+1] == 'c')
	    {
	      cont2--;
	      char ch = va_arg(_print, int);
	      putchar(ch);
	    }
	  if (format[cont+1] != 's' && format[cont+1] != 'c')
	    {
	      return (-1);
	    }
	  skip = 1;
	}
      else if (skip != 1)
	{
	  putchar(format[cont]);
	}
      else if (skip == 1)
	{
	  skip = 0;
	  continue;
	}
    }
  return (cont2);
  va_end(_print);
}

int _strlen(char *str)
{
  int i, count = 0;
  for(i = 0; str[i] != '\0'; i++)
    {
      count++;
    }
  return count;
}

