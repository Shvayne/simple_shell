#include "main.h"

/**
 * print_c - Prints character when specifier is c
 * @ap: va_list pointer
 *
 * Return: 1
 */
int print_c(va_list ap)
{
	char c = (char)va_arg(ap, int);

	return (_putchar(c));
}

/**
 * print_s - Prints string when specifier is s
 * @ap: va_list pointer
 *
 * Return: Number of characters printed
 */
int print_s(va_list ap)
{
	int count;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);
	return (count);
}
