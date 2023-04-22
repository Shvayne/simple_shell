#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
/**
 * read_input - function to read input from user
 * @input: input string
 * @input_size: size of input
 */
void read_input(char **input, size_t *input_size)
{
	printf("$ ");
	if (getline(input, input_size, stdin) == -1)
	{
		printf("\n");
		free(*input);
		exit(EXIT_SUCCESS);
	}
}
