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
int print_int(va_list ap);
void print_number(int n);
int count_digits(int n);
char *convert_number(unsigned long int, int, int);
int print_binary(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_lower_hexa(va_list);
int print_upper_hexa(va_list);
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
