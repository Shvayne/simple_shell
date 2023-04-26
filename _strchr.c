#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	char *ptr;
	int i;

	ptr = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}
	if (s[i] == c)
		ptr = &s[i];
	return (ptr);
}
