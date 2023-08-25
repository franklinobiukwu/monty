#include "monty.h"


/**
* _swap - Fuction that swaps the top two
* element of the stack
*
* @stack: pointer to stack
* @line_number: line number
*/

void _swap(__attribute((unused))stack_t **stack,
	   __attribute((unused))unsigned int line_number)
{
	int temp;

	/*Return if stack is NULL of has only one node*/
	if (gv->head == NULL || gv->head->next == NULL)
		return;
	temp = gv->head->n;
	gv->head->n = gv->head->next->n;
	gv->head->next->n = temp;
}

/**
* _add - Function that adds the top two
* elements of the stack
*
* @stack: pointer to stack
* @line_number: line number
*/

void _add(__attribute((unused))stack_t **stack,
	   __attribute((unused))unsigned int line_number)
{
	printf("Add t nodes");
}

/**
* _nop - Fuction that does nothing
*
* @stack: pointer to stack
* @line_number: line number
*/

void _nop(__attribute((unused))stack_t **stack,
	   __attribute((unused))unsigned int line_number)
{
}
