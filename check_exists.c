#include "main.h"

/**
 * check_exists - Checks if a command exists in the PATH
 * @cmd: Command to be checked for
 *
 * Return: The full path of the command if it exists or NULL if not found
 */
char *check_exists(char *cmd)
{
	char *path, *path_cp, *path_token, *full_path;
	int cmd_length, dir_length;
	struct stat st;

	path = _getenv("PATH");
	if (path)
	{
		path_cp = _strdup(path);
		cmd_length = _strlen(cmd);
		path_token = strtok(path_cp, ":");
		while (path_token)
		{
			dir_length = _strlen(path_token);
			full_path = malloc(sizeof(char) * (dir_length + cmd_length + 2));
			sprintf(full_path, "%s/%s", path_token, cmd);
			if (stat(full_path, &st) == 0)
				return (full_path);
			path_token = strtok(NULL, ":");
		}
	}
	return (NULL);
}
