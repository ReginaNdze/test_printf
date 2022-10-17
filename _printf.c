#include "main.h"

/**
  *_printf - function that produces output accordin  *g to format
  *@format: the various formats, a string of directives
  *Return: number of characters printed excluding null byte
  */

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list arguments;
	char *s;
	int count = 0;

	va_start(arguments, format);

	while (format[count] != '\0')
	{
		if (format[count] == '%')
		{
		switch (format[++count])
		{
			case 'c':
				i = va_arg(arguments, int);
				_putchar(i);
				count++;
				break;
			case 's':
				s = va_arg(arguments, char *);
				while (*s)
				_putchar(*s++);
				count++;
				break;
			case '%':
				_putchar('%');
				break;
		}
		count++;
		continue;
		}
	_putchar(format[count]);
	count++;
	}
	va_end(arguments);
	return (count);
}


