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
int readline();
char **tokenize(char *str, const char *delim);
void kill(const char *message);
void free_stack(void);
void free_arr(char **arr);
char *error_message(char *message);
void add_stack(stack_t **stack, unsigned int);
void push_stack(stack_t **stack, unsigned int);
void end_stack(stack_t **stack, unsigned int);

#endif /*MONTY_H*/

