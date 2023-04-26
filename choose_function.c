#include "main.h"

/**
 * choose_function - Selects function to call
 * based on specifier
 * @specifier: Specifier character
 *
 * Return: Pointer to the function to be called
 */
int (*choose_function(const char specifier))(va_list)
{
	unsigned int i;
	spec_t options[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_lower_hexa},
		{'X', print_upper_hexa},
		{'\0', NULL}
	};

	for (i = 0; options[i].character != '\0'; i++)
	{
		if ((options[i].character) == specifier)
			return (options[i].func);
	}
	return (NULL);
}
