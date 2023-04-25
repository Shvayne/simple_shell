#include "main.h"

/**
 * execute_command - Executes commands
 * @args: Argument array
 */
void execute_command(char **args)
{
	char *command = NULL;

	if (args)
	{
		command = args[0];
		if (execve(command, args, environ) == -1)
			perror(args[0]);
	}
}
