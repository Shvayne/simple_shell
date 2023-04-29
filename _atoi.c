#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: String to be converted
 *
 * Return: The converted integer or 0 if there's an error
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, result = 0;

	if (!s)
		return (0);
	while (s[i] && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
