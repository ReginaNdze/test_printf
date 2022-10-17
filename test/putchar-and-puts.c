#include "main.h"

/**
  *_putchar - prints a character to stdout
  *@c: character to print
  *Return: a character
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
  *_puts - prints out a string
  *@str: string to be printed
  *Return: 0 on success
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
