#include "main.h"

/**
 * forxecute - Creates a new process and executes a command
 * @args: Array of argument strings containing the command to be executed
 */
void forxecute(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		execute_command(args);
	}
	else if (pid < 0)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}
