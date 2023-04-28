#include "main.h"

/**
 * parse_input - Breaks command line input into tokens
 * and puts them in the command data structure
 * @data: Command data structure
 *
 * Return: 1 on success, -1 on failure
 */
int parse_input(cmd_t *data)
{
	char *token = NULL, *delim = " \n\t\r\a\v";
	int i, all_spaces = 1;

	if (_strcmp(data->line, "\n") == 0)
		return (FAIL);
	for (i = 0; data->line[i] != '\n'; i++)
	{
		if (data->line[i] != ' ')
		{
			all_spaces = 0;
			break;
		}
	}
	if (all_spaces)
		return (FAIL);
	data->args = malloc(sizeof(char *) * 64);
	if (!data->args)
		return (FAIL);
	token = strtok(data->line, delim);
	for (i = 0; token; i++)
	{
		data->args[i] = token;
		token = strtok(NULL, delim);
	}
	data->args[i] = NULL;
	return (SUCCESS);
}
