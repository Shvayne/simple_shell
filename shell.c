#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char *input = NULL;
	size_t input_size = 0;
	char *args[MAX_LENGTH];
	char *path = "/bin/";
	int status;
	pid_t pid;

	while (1)
	{
		read_input(&input, &input_size);
		if (strcmp(input, "exit\n") == 0)
		{
			free(input);
			exit(EXIT_SUCCESS);
		}
		parse_input(input, args, path);
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
