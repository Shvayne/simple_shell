#include "main.h"

/**
 * _env - Prints all environment variables
 * @args: Array of argument strings
 */
void _env(char **args)
{
	int i;
	(void) args;

	for (i = 0; environ[i]; i++)
		printf("%s\n", environ[i]);
}
