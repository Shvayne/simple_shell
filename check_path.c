#include "main.h"

/**
 * check_path - Checks if a command exists in the PATH
 * and populates the data structure
 * @data: Pointer to the command data structure
 */
void check_path(cmd_t *data)
{
	char *path, *path_cp, *path_token;
	struct stat st;
	size_t exists = 0;

	path = _getenv("PATH");
	path_cp = _strdup(path);
	path_token = strtok(path_cp, ":");
	while (path_token)
	{
		data->cmd = strpath(path_token, data->args[0]);
		if (stat(data->cmd, &st) == 0)
		{
			exists = 1;
			break;
		}
		free(data->cmd);
		path_token = strtok(NULL, ":");
	}
	if (!exists)
		data->cmd = _strdup(data->args[0]);
	free(path_cp);
}
