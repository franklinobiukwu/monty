#ifndef MONTY_H
#define MONTY_H
#define BUF_SIZE 1024

/*LIBRARY INCLUDES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/*STRUCTS*/
#include "structs.h"

/*GLOBAL VARIABLE*/
extern struct gv_s *gv;

/*FUNCTION PROTOTYPES*/
int readline(void);
void validate(void);
int valid(void);
char **tokenize(char *str, const char *delim);
void kill(const char *message);
void clean_up(const char *message);
void free_stack(void);
void free_arr(char **arr);
char *error_message(char *message);
char *_strdup(char *str);
int execute(void);

/*Opcod execution prototypes*/
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);

#endif /*MONTY_H*/

