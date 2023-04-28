#include "main.h"

/**
 * _isalpha - Checks if a character is a letter
 * @c: Character to be checked
 *
 * Return: 1 if character is a letter, -1 if it is not
 */
int _isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (SUCCESS);
	else
		return (FAIL);
}
