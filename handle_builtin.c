#include "main.h"

/**
 * choose_builtin - Checks if a builtin command is entered
 * @data: Pointer to command data structure
 *
 * Return: 1 if it is a builtin or 0 if command is not a builtin
 */
int choose_builtin(cmd_t *data)
{
	inbuilt_t funcs[] = {
		{"exit", exit_shell},
		{"env", print_env},
		{NULL, NULL}
	};
	int i;

	for (i = 0; funcs[i].cmd; i++)
	{
		if (_strcmp(funcs[i].cmd, data->args[0]) == 0)
			return (SUCCESS);
	}
	return (0);
}

/**
 * execute_builtin - Executes a builtin command
 * @data: Pointer to command data structure
 *
 * Return: 1 on success, -1 on failure
 */
int execute_builtin(cmd_t *data)
{
	inbuilt_t funcs[] = {
		{"exit", exit_shell},
		{"env", print_env},
		{NULL, NULL}
	};
	int i;

	for (i = 0; funcs[i].cmd; i++)
	{
		if (_strcmp(funcs[i].cmd, data->args[0]) == 0)
			return (funcs[i].func(data));
	}
	return (FAIL);
}
