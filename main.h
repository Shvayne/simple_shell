#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

/**
 * struct built_in - Structure for built-in commands
 * @cmd: String command
 * @func: Corresponding function
 */
typedef struct built_in
{
	char *cmd;
	void (*func)(char **);
} inbuilt;

ssize_t read_input(char **, size_t *);
char **parse_input(char *, ssize_t);
char *_getenv(const char *);
char *check_exists(char *);
void execute_command(char **);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(const char *s1, const char *s2);
char *_strchr(char *s, char c);
void forxecute(char **);
void (*choose_builtin(char *))(char **);
void exit_shell(char **args);
void _env(char **args);

#endif
