#include "main.h"

/**
 * classify_cmd - Checks if command is executable file or built-in
 * @data: Pointer to command data structure
 *
 * Return: 0 if it is a builtin, 1 if it is an executable or -1 on failure
 */
int classify_cmd(cmd_t *data)
{
	int result;

	/* if command contains /, input it into the structure */
	if (_strchr(data->args[0], '/'))
	{
		data->cmd = _strdup(data->args[0]);
		result = SUCCESS;
	}
	/* if command is a built-in, execute it */
	if (choose_builtin(data) > 0)
	{
		if (execute_builtin(data) < 0)
			return (FAIL);
		return (0);
	}
	/* check PATH. If it is in the PATH, input into the structure */
	check_path(data);
	result = SUCCESS;
	return (result);
}
