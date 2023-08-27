#include "monty.h"
#include <stdio.h>

#define SIZE 1024

/**
* validate - validate instructions; prints error message
* and exit program if invalid
*
*/

void validate(void)
{
	char *endptr;

	if (gv->instruction == NULL || gv->instruction[0] == NULL)
	{
		fprintf(stderr, "L%d: Empty instruction\n", gv->line_number);
		kill(NULL);
	}
	/*Validate push command*/
	if (strcmp(gv->instruction[0], "push") == 0)
	{
		if (gv->instruction[1] == NULL)
		{
			fprintf(stderr, "L%d: usage: %s integer\n",
		gv->line_number, gv->instruction[0]);
			kill(NULL);
		}
		gv->data = strtol(gv->instruction[1], &endptr, 10);
		if (*endptr != '\0')
		{
			fprintf(stderr, "L%d: usage: %s integer\n",
				gv->line_number, gv->instruction[0]);
			kill(NULL);
		}
	}
	else if (valid())
	{
		return;
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n",
			gv->line_number, gv->instruction[0]);
		kill(NULL);
	}
}


/**
* valid - Function that returns 1 if true
*
* Return: 1 if vald or 0 if in invalid
*/

int valid(void)
{
	if (strcmp(gv->instruction[0], "pall") == 0 ||
	     strcmp(gv->instruction[0], "pop") == 0 ||
	     strcmp(gv->instruction[0], "pint") == 0 ||
	     strcmp(gv->instruction[0], "swap") == 0 ||
	     strcmp(gv->instruction[0], "add") == 0 ||
	     strcmp(gv->instruction[0], "nop") == 0 ||
	     strcmp(gv->instruction[0], "sub") == 0 ||
	     strcmp(gv->instruction[0], "div") == 0)
		return (1);
	return (0);
}
