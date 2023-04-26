#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	return (1);
}

/**
 * _puts - Writes a string to stdout
 * @str: String to write
 *
 * Return: Number of characters in string
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
