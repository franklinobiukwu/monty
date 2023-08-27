#include "monty.h"

/**
* _sub - Function that subtracts the top element of the
* stack from the second to element of the stack
*
* @stack: Pointer to stack
* @line_number: line number
*/

void _sub(__attribute((unused))stack_t **stack,
	  __attribute((unused))unsigned int line_number)
{
	stack_t *head = gv->head;

	/*Exit program if stack element is NULL of less that two*/
	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
		gv->line_number);
		kill(NULL);
	}
	/*Subtract to element from second top element*/
	gv->head->next->n = head->next->n - head->n;
	/*Remove top element*/
	_pop(&(gv->head), gv->line_number);
}
