#include "main.h"

/**
 * print_int - Prints integer when specifier is i
 * @ap: parameter
 *
 * Return: Number of digits printed
 */
int print_int(va_list ap)
{
	int num_count;
	int n = va_arg(ap, int);

	num_count = count_digits(n);
	if (n <= 0)
		num_count++;
	print_number(n);
	return (num_count);
}

/**
 * print_unsigned - Prints unsigned integer
 * when specifier is u
 * @ap: Variable argument
 *
 * Return: Number of digits printed
 */
int print_unsigned(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *result = convert_number(num, 10, 0);

	return (_puts(result));
}

/**
 * print_number - Prints a number
 * @n: Number
 */
void print_number(int n)
{
	unsigned int m = 0;

	if (n < 0)
	{
		m = n * -1;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}

/**
 * count_digits - Counts the number of digits in a number
 * @n: Number
 * Return: Number of digits
 */
int count_digits(int n)
{
	unsigned int number, d = 0;

	if (n < 0)
		number = n * -1;
	else
		number = n;
	while (number != 0)
	{
		number = number / 10;
		d++;
	}
	return (d);
}
