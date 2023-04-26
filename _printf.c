#include "main.h"

/**
 * _printf - Mimics the printf function
 * @format: Format string of what is to be printed
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int char_count = 0;
	int (*f)(va_list);
	const char *cp;

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	va_start(arg, format);
	for (cp = format; *cp != '\0'; cp++)
	{
		if (*cp == '%')
		{
			cp++;
			if (*cp == '%')
			{
				char_count += _putchar('%');
				continue;
			}
			if (arg == NULL)
				return (-1);
			f = choose_function(*cp);
			char_count += (f) ? f(arg) : _printf("%%%c", *cp);
		}
		else
		{
			char_count += _putchar(*cp);
		}
	}
	_putchar(-1);
	va_end(arg);
	return (char_count);
}
