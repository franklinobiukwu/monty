#include "monty.h"
#include <stdio.h>


/**
 * execute - Execute opcode
 *
 * Return: 0 if sucessful, 1 if fail
 */

int execute(void)
{
	struct instruction_s current_command;
	int num_of_cmd;
	int i;

	char *cmd_str[] = {"push", "pall", "pint", "pop", "swap", "add", "nop"};

	void (*cmd[])(stack_t **, unsigned int) = {&_push, &_pall, &_pint, &_pop,
		&_swap, &_add,  &_nop};

	/*Determine the number of commands*/
	num_of_cmd = (sizeof(cmd_str) / sizeof(cmd_str[0]));

	/*Match and execute the right function*/
	for (i = 0; i < num_of_cmd; i++)
	{
		if (strcmp(gv->instruction[0], cmd_str[i]) == 0)
		{
			current_command.f = cmd[i];
			current_command.f(&(gv->head), gv->line_number);
			free(gv->instruction);
			return (0);
		}
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", gv->line_number,
	 gv->instruction[0]);
	kill(NULL);

	/*Failure*/
	return (1);
}
