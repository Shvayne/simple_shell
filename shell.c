#include "main.h"

/**
 * main - Simple shell program
 * Return: Always 0
 */
int main(void)
{
	cmd_t data;
	int cmd_check;

	_memset((void *)&data, 0, sizeof(data)); /* set data to 0 */
	signal(SIGINT, signal_handler); /* handle Ctrl+c */
	while (1)
	{
		set_cmd_index(&data);
		if (read_input(&data) < 0) /* if reading fails */
		{
			if (isatty(STDIN_FILENO))
				_printf("\n");
			break;
		}
		if (parse_input(&data) < 0) /* if splitting fails */
		{
			free_data(&data);
			continue;
		}
		cmd_check = classify_cmd(&data);
		if (cmd_check == 0) /* if built-in, automatically executed */
		{
			free_data(&data); /* free the data structure */
			continue; /* go back to prompt */
		}
		if (cmd_check < 0) /* if there's an error */
		{
			print_error(&data); /* display the error */
			continue; /* go back to prompt */
		}
		if (forxecute(&data) < 0) /* if there's an error */
		{
			print_error(&data); /* display the error */
			break; /* exit the shell */
		}
		free_data(&data);
	}
	free_data(&data);
	exit(EXIT_SUCCESS);
}
