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
	char *result;

	length = _strlen(s) +  1;
	result = malloc(sizeof(char) * length);
	if (!result)
		return (NULL);
	_strcpy(result, s);
	return (result);
}
