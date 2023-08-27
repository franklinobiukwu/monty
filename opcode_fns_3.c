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



/**
* _div - Function that devides the second top element of
* the stack by the top element of the stack
*
* @stack: Pointer to stack
* @line_number: line number
*/

void _div(__attribute((unused))stack_t **stack,
	  __attribute((unused))unsigned int line_number)
{
	stack_t *head = gv->head;

	/*Exit program if stack element is NULL of less that two*/
	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n",
		gv->line_number);
		kill(NULL);
	}
	/*Exit if top element of stack is zero*/
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n",
		gv->line_number);
		kill(NULL);
	}
	/*Divide second top element by top element*/
	gv->head->next->n = head->next->n / head->n;
	/*Remove top element*/
	_pop(&(gv->head), gv->line_number);
}



/**
* _mul - Function that multiplies the second top element of
* the stack with the top element of the stack
*
* @stack: Pointer to stack
* @line_number: line number
*/

void _mul(__attribute((unused))stack_t **stack,
	  __attribute((unused))unsigned int line_number)
{
	stack_t *head = gv->head;

	/*Exit program if stack element is NULL of less that two*/
	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n",
		gv->line_number);
		kill(NULL);
	}
	/*Divide second top element by top element*/
	gv->head->next->n = head->next->n * head->n;
	/*Remove top element*/
	_pop(&(gv->head), gv->line_number);
}
