#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>

/* Global environment variable */
extern char **environ;

#define PROMPT "$ "
#define SUCCESS (1)
#define FAIL (-1)

/**
 * struct cmd_data - Data structure for commands
 * @line: Command line typed
 * @args: Arguments of command line
 * @cmd: Parsed command (first argument)
 * @err_msg: Error message
 * @index: Index of command (1 for 1st command, 2 for 2nd and so on)
 * @prog_name: Name of executable (for displaying error)
 *
 * Description: This structure contains all the data associated with
 * a particular command when it is run in the shell
 */
typedef struct cmd_data
{
	char *line;
	char **args;
	char *cmd;
	char *err_msg;
	int index;
	char *prog_name;
} cmd_t;

/**
 * struct built_in - Structure for built-in commands
 * @cmd: String command
 * @func: Corresponding function
 */
typedef struct built_in
{
	char *cmd;
	int (*func)(cmd_t *);
} inbuilt_t;

/**
 * struct specifier - struct to map specifier to functio
 * @character: specifier character
 * @func: corresponding function
 */
typedef struct specifier
{
	char character;
	int (*func)(va_list);
} spec_t;

int _printf(const char *, ...);
int _putchar(char);
int _puts(char *);
int (*choose_function(const char))(va_list);
int print_c(va_list);
int print_s(va_list);
int print_int(va_list);
void print_number(int);
int count_digits(int);
char *convert_number(unsigned long int, int, int);
char *_getenv(char *);
int _strlen(char *);
char *_strcpy(char *, char *);
char *_strdup(char *);
int _strcmp(const char *, const char *);
char *_strchr(char *, char);
char *_strcat(char *, char *);

int read_input(cmd_t *);
void signal_handler(int);
char *_memset(char *, char, unsigned int);
void set_cmd_index(cmd_t *, char **);
int parse_input(cmd_t *);
int classify_cmd(cmd_t *);
int choose_builtin(cmd_t *);
int execute_builtin(cmd_t *);
int exit_shell(cmd_t *);
int print_env(cmd_t *);
int _isalpha(char);
int _atoi(char *);
void free_data(cmd_t *);
void check_path(cmd_t *);
char *strpath(char *, char *);
void print_error(cmd_t *);
int forxecute(cmd_t *);

#endif
