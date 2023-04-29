#include "main.h"

/**
 * free_data - Frees the command data structure
 * @data: Pointer to the command data structure
 */
void free_data(cmd_t *data)
{
	free(data->line);
	data->line = NULL;
	free(data->args);
	data->args = NULL;
	free(data->cmd);
	data->cmd = NULL;
	free(data->err_msg);
	data->err_msg = NULL;
	free(data->prog_name);
	data->prog_name = NULL;
}
