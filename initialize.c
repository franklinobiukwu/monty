#include "monty.h"
/**
 * initialize - initializes parameters of param structure
 */
void initialize(void)
{
	mont = malloc(sizeof(param));
	if (!mont)
		malloc_error();
	mont->n = 0;
	mont->entry = 0;
	mont->arr = NULL;
	mont->line_number = 1;
	mont->read_len = 0;
}
