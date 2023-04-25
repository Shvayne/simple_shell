#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define MAX_LENGTH 1024

extern char **environ;

ssize_t read_input(char **, size_t *);
char **parse_input(char *, ssize_t);
char *_getenv(const char *);
char *check_exists(char *);
void execute_command(char **);
void forkxecute(char **);

#endif
