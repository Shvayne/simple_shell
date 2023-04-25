#include "main.h"

/**
 * _getenv - Gets the value of an environment variable
 * @name: Name of environment variable needed
 *
 * Return: Value of environment variable or NULL if not found
 */
char *_getenv(const char *name)
{
	unsigned int i = 0;
	char *value, *var, *env;

	while (environ[i])
	{
		env = strdup(environ[i]);
		var = strtok(env, "=");
		if (var && (strcmp(var, name) == 0))
		{
			value = strtok(NULL, "=");
			return (value);
		}
		i++;
	}
	return (NULL);
}
