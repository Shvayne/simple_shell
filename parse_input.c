#include "main.h"

/**
 * parse_input - Breaks command line input into tokens
 * and puts them in an array
 * @input: Input string
 * @nread: Number of characters in string
 *
 * Return: Pointer to array of string tokens
 */
char **parse_input(char *input, ssize_t nread)
{
	/*
	 * char *program = strtok(input, " ");
	 * char *progpath = malloc(strlen(path) + strlen(program) + 1);
	 */
	char *input_cp = NULL, *token = NULL, *delim = " \n";
	int i, num_tokens = 0;
	char **args;

	input_cp = malloc(sizeof(char) * nread);
	input_cp = strcpy(input_cp, input);
	/*
	 * Use strtok first to find the number of tokens
	 * so we create an array with that number
	 */
	token = strtok(input, delim);
	while (token)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	args = malloc((sizeof(char *) * num_tokens) + 1);

	/* Use strtok again to put each token in the array */
	token = strtok(input_cp, delim);
	for (i = 0; token; i++)
	{
		args[i] = malloc(sizeof(char) * strlen(token));
		args[i] = strcpy(args[i], token);
		token = strtok(NULL, delim);
	}
	args[i] = NULL;
	return (args);
	/*
	 * sprintf(progpath, "%s%s", path, program);
	 * args[0] = progpath;
	 * i = 1;
	 * while
	 *	((args[i++] = strtok(NULL, " ")) != NULL);
	 */
}
