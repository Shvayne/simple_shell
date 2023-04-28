#include "main.h"

/**
 * read_input - Reads input from command line
 * @data: Pointer to command data structure
 *
 * Return: 1 on success, -1 on failure
 */
int read_input(cmd_t *data)
{
	ssize_t actual_read;
	size_t input_size = 0;

	/* display prompt if in interactive mode */
	if (isatty(STDIN_FILENO))
		_printf(PROMPT);
	actual_read = getline(&data->line, &input_size, stdin);
	if (actual_read == -1)
		return (FAIL);
	return (SUCCESS);
}
