#include "main.h"

/**
  * strpath - Concatenates two strings into path form
  * @first: the first given destination
  * @second: the second given source
  *
  * Return: Pointer to the concatenated string or NULL
  */
char *strpath(char *first, char *second)
{
	int len1, len2, i = 0, j = 0;
	char *result;

	len1 = _strlen(first);
	len2 = _strlen(second);
	result = malloc((len1 + len2 + 2) * sizeof(char));
	if (!result)
		return (NULL);
	*result = '\0';
	while (first[j])
		result[i++] = first[j++];
	result[i++] = '/';
	j = 0;
	while (second[j])
		result[i++] = second[j++];
	result[i] = '\0';
	return (result);
}
