#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#define MAX_LENGTH 1024

typedef int pid_t;
void read_input(char **input, size_t *input_size);
void parse_input(char *input, char **args, char *path);
void execute_command(char **args);



#endif
