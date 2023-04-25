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

	while (1)
	{
		printf("$ ");
		nread = read_input(&input, &input_size);
		args = parse_input(input, nread);
		/* if it's already a path, run am like that */
		if (strchr(args[0], '/'))
		{
			forkxecute(args);
		}
		else
		{
			/* check_exist returns the full path if it exists */
			args[0] = check_exists(args[0]);
			/* fork will only be called if it exists */
			if (args[0])
				forkxecute(args);
			/* still have to add what to do if it doesn't exist  */
		}
	}
	return (0);
}
