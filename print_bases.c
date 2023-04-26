#include "main.h"

/**
 * print_binary - Prints binary number
 * when specifier is b
 * @ap: Argument
 *
 * Return: Number of digits
 */
int print_binary(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *result = convert_number(num, 2, 0);

	return (_puts(result));
}

/**
 * print_octal - Prints octal number
 * when specifier is o
 * @ap: Argument
 *
 * Return: Number of digits
 */
int print_octal(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *result = convert_number(num, 8, 0);

	return (_puts(result));
}

/**
 * print_lower_hexa - Prints hexadecimal number
 * with lowercase letters when specifier is x
 * @ap: Argument
 *
 * Return: Number of digits
 */
int print_lower_hexa(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *result = convert_number(num, 16, 0);

	return (_puts(result));
}

/**
 * print_upper_hexa - Prints hexadecimal number
 * with uppercase letters when specifier is X
 * @ap: Argument
 *
 * Return: Number of digits
 */
int print_upper_hexa(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *result = convert_number(num, 16, 1);

	return (_puts(result));
}
