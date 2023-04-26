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
	void (*f)(char **);

	while (1)
	{
		printf("$ ");
		nread = read_input(&input, &input_size);
		args = parse_input(input, nread);
		f = choose_builtin(args[0]);
		if (f)
		{
			f(args);
			continue;
		}
		if (_strchr(args[0], '/'))
		{
			forxecute(args);
		}
		else
		{
			args[0] = check_exists(args[0]);
			if (args[0])
				forxecute(args);
			/* TODO: what to do if it doesn't exist */
		}
	}
	return (0);
}
