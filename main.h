#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#define MAX_LENGTH 1024

extern char **environ;

ssize_t read_input(char **, size_t *);
char **parse_input(char *, ssize_t);
void execute_command(char **);



#endif
