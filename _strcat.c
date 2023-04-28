#include "main.h"

/**
 * _strcat - Appends a string to another
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
