#include "main.h"

/**
 * print_error - Prints the error of an incorrect command
 * @data: Pointer to the command data structure
 */
void print_error(cmd_t *data)
{
	fprintf(stderr, "hsh: %d: %s: %s", data->index, data->args[0], data->err_msg);
}
