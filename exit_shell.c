#include "main.h"

/**
 * exit_shell - Closes the shell program
 * @data: Pointer to the command data structure
 *
 * Return: Shell exits on success, -1 on failure
 */
int exit_shell(cmd_t *data)
{
	int code, i = 0;

	if (!data->args[1])
	{
		free_data(data);
		if (errno == 0)
			exit(EXIT_SUCCESS);
		else if (errno == 25 && data->index == 2)
			exit(2);
		else
			exit(errno);
	
	}
	while (data->args[1][i])
	{
		if (_isalpha(data->args[1][i++]) > 0)
		{
			data->err_msg = _strdup("Illegal number\n");
			return (FAIL);
		}
	}
	code = _atoi(data->args[1]);
	free_data(data);
	exit(code);
}
