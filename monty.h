#ifndef MONTY_H
#define MONTY_H

/*LIBRARY INCLUDES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

#endif /*MONTY_H*/
