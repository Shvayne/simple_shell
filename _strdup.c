#include "main.h"

/**
 * _strdup - Creates a duplicate of a string
 * @s: String to be duplicated
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *_strdup(char *s)
{
	size_t length;
	char *result, *p;

	length = _strlen(s) + 1;
	result = malloc(sizeof(char) * length);
	if (!result)
		return (NULL);
	p = result;
	while (*s)
		*p++ = *s++;
	*p = '\0';
	return (result);
}
