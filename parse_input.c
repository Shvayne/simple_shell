#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
/**
 * parse_input - function to make input readable by the shell
 * @input: input string
 * @args: array
 * @path: directory
 */
void parse_input(char *input, char **args, char *path)
{
	char *program = strtok(input, " ");
	char *progpath = malloc(strlen(path) + strlen(program) + 1);
	int i;

	sprintf(progpath, "%s%s", path, program);
	args[0] = progpath;
	i = 1;
	while
		((args[i++] = strtok(NULL, " ")) != NULL);
}
