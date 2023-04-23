#include "main.h"

/**
 * read_input - Reads input from command line
 * @input: Pointer to input string
 * @input_size: Number of characters in string
 *
 * Return: Number of characters read from input
 */
ssize_t read_input(char **input, size_t *input_size)
{
	ssize_t actual_read;

	actual_read = getline(input, input_size, stdin);
	if (actual_read == -1)
	{
		printf("\n");
		exit(EXIT_SUCCESS);
	}
	return (actual_read);
}
