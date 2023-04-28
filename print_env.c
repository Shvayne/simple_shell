#include "main.h"

/**
 * print_env - Prints all environment variables
 * @data: Pointer to the command data structure
 *
 * Return: 1
 */
int print_env(cmd_t *data)
{
	int i;
	(void) data;

	for (i = 0; environ[i]; i++)
		_printf("%s\n", environ[i]);
	return (SUCCESS);
}
