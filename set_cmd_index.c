#include "main.h"

/**
 * set_cmd_index - Sets the index of a command and program name
 * @data: Pointer to command data structure
 * @av: Array of argument strings
 */
void set_cmd_index(cmd_t *data, char **av)
{
	data->index += 1;
	data->prog_name = _strdup(av[0]);
}
