#include "main.h"

/**
 * print_error - Prints the error of an incorrect command
 * @data: Pointer to the command data structure
 */
void print_error(cmd_t *data)
{
	char *prog = data->prog_name;
	char *cmd = data->args[0];
	char *err = data->err_msg;

	fprintf(stderr, "%s: %d: %s: %s", prog, data->index, cmd, err);
	free_data(data);
}
