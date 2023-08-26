#include "monty.h"
#include "structs.h"
#include <stdio.h>


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
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
	  gv->line_number);
		kill(NULL);
	}
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
	stack_t *head = gv->head;

	/*If stack is NULL of stack elements are less than 2*/
	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short",
	  gv->line_number);
		kill(NULL);
	}
	/*sum values of first two node of list and store in second node*/
	gv->head->next->n = head->n + head->next->n;
	/*remove top element*/
	_pop(&(gv->head), gv->line_number);
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
