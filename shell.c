#include "main.h"

/**
 * main - Simple shell program
 * Return: Always 0
 */
int main(void)
{
	char *input = NULL;
	size_t input_size = 0;
	ssize_t nread;
	char **args;
	int status;
	pid_t pid;

	while (1)
	{
		printf("$ ");
		nread = read_input(&input, &input_size);
		if (strcmp(input, "exit\n") == 0)
		{
			free(input);
			exit(EXIT_SUCCESS);
		}
		args = parse_input(input, nread);
		pid = fork();

		if (pid == 0)
		{
			execute_command(args);
		}
		else if (pid < 0)
		{
			printf("Error: failed to fork\n");
			free(args[0]);
			free(input);
			exit(EXIT_FAILURE);
		}
		else
		{
			do {
				waitpid(pid, &status, WUNTRACED);
			} while (!WIFEXITED(status) && !WIFSIGNALED(status));
			free(args[0]);
		}
	}
	return (0);
}
