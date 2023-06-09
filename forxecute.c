#include "main.h"

/**
 * forxecute - Creates a new process and executes a command
 * @data: Pointer to the command data structure
 *
 * Return: 1 on success, -1 on failure
 */
int forxecute(cmd_t *data)
{
	pid_t pid;
	int status;
	struct stat st;

	if (stat(data->cmd, &st) == 0)
	{
		pid = fork();
		if (pid == 0)
		{
			signal(SIGINT, SIG_DFL);
			if (execve(data->cmd, data->args, environ) == -1)
			{
				data->err_msg = _strdup("not found\n");
				errno = 127;
				return (FAIL);
			}
		}
		else
		{
			waitpid(pid, &status, WUNTRACED);
		}
	}
	else
	{
		data->err_msg = _strdup("not found\n");
		errno = 127;
		return (FAIL);
	}
	return (SUCCESS);
}
