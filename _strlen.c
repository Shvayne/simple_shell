#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length oa string s
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
