#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: -1 if first is less than second
 */
int _strcmp(const char *s1, const char *s2)
{
	int result = 0;
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
		result = s1[i] - s2[i];
	return (result);
}
