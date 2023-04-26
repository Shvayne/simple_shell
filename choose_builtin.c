#include "main.h"

/**
 * choose_builtin - Gets the function for a builtin command if one is entered
 * @cmd: Builtin command
 *
 * Return: Pointer to function or NULL if command is not a builtin
 */
void (*choose_builtin(char *cmd))(char **args)
{
	inbuilt funcs[] = {
		{"exit", exit_shell},
		{"env", _env},
		{NULL, NULL}
	};
	int i;

	for (i = 0; funcs[i].cmd; i++)
	{
		if (strcmp(funcs[i].cmd, cmd) == 0)
			break;
	}
	return (funcs[i].func);
}
