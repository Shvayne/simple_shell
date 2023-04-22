#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
/**
 * execute_command - function to execute commands
 * @args: array
 */
void execute_command(char **args)
{
	execve(args[0], args, NULL);
	printf("Error: command not found\n");
	exit(EXIT_FAILURE);
}
