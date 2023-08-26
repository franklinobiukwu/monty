#include "monty.h"
#include <stdio.h>

/**
* _push - Function that pushes data to stack
*
* @stack: pointer to stack
* @line_number: line number
*/

void _push(__attribute((unused))stack_t **stack,
	   __attribute((unused))unsigned int line_number)
{
	stack_t *new_node;

	/*Create node*/
	new_node = malloc(sizeof(stack_t));
	/*Exit if node creation fails*/
	if (new_node == NULL)
		kill("Error: malloc failed");
	/*Set node*/
	new_node->n = gv->data;
	new_node->prev = NULL;
	new_node->next = NULL;

	/*Set new node if head is NULL*/
	if (gv->head == NULL)
		gv->head = new_node;
	else
	{
		/*Set new node on list*/
		new_node->next = gv->head;
		gv->head = new_node;
		new_node->next->prev = new_node;
	}
}


/**
* _pall - Function that prints all values on the stack
*
* @stack: pointer to stack
* @line_number: line number
*/

void _pall(__attribute((unused))stack_t **stack,
	   __attribute((unused))unsigned int line_number)
{
	stack_t *head = gv->head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}

/**
* _pint - Print the value at the top of the stack
* followed by a new line
*
* @stack: pointer to stack
* @line_number: line number
*/

void _pint(__attribute((unused))stack_t **stack,
	   __attribute((unused))unsigned int line_number)
{
	stack_t *head = gv->head;

	/*Return if head is NULL*/
	if (head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n",
	  gv->line_number);
		kill(NULL);
	}
	printf("%d\n", head->n);
}


/**
* _pop - Removes the top element of the stack
*
* @stack: pointer to stack
* @line_number: line number
*/

void _pop(__attribute((unused))stack_t **stack,
	   __attribute((unused))unsigned int line_number)
{
	stack_t *temp = gv->head;

	/*Return if head is NULL*/
	if (gv->head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n",
	  gv->line_number);
		kill(NULL);
	}
	gv->head = gv->head->next;
	gv->head->prev = NULL;

	/*Free removed stack*/
	free(temp);
}
