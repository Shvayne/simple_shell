#include "main.h"

/**
 * convert_number - Converts unsigned number to a base
 * and returns a converted string
 * @number: Unsigned number to be converted
 * @base: Base to be converted to
 * @uppercase: Flag to set letters as upper or lower case,
 * if base is greater than 10
 *
 * Return: Converted number as string
 */
char *convert_number(unsigned long int number, int base, int uppercase)
{
	static char *subs;
	static char buff[50];
	char *result;

	if (uppercase > 0)
		subs = "0123456789ABCDEF";
	else
		subs = "0123456789abcdef";
	result = &buff[49];
	*result = '\0';
	do {
		*(result - 1) = subs[number % base];
		number /= base;
		result--;
	} while (number != 0);
	return (result);
}
