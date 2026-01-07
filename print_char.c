#include "main.h"

/**
 * print_char - Prints a character
 * @args: Argument list
 *
 * Return: Always 1
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	if (c == '\0')
		return (_putchar(0));

	return (_putchar(c));
}
