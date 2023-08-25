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
	char badopcode[SIZE];
	char *endptr;

	if (gv->instruction == NULL || gv->instruction[0] == NULL)
	{
		fprintf(stderr, "L%d: Empty instruction\n", gv->line_number);
		kill(NULL);
	}
	sprintf(badopcode, "%s %s", gv->instruction[0], gv->instruction[1]);
	/*Validate push command*/
	if (strcmp(gv->instruction[0], "push") == 0)
	{
		if (gv->instruction[1] == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n",
		gv->line_number, badopcode);
			kill(NULL);
		}
		gv->data = strtol(gv->instruction[1], &endptr, 10);
		if (*endptr != '\0')
		{
			fprintf(stderr, "L%d: unknown instruction %s\n",
				gv->line_number, badopcode);
			kill(NULL);
		}
	}
	else if (strcmp(gv->instruction[0], "pall") == 0 ||
		strcmp(gv->instruction[0], "pint") == 0 ||
		strcmp(gv->instruction[0], "swap") == 0 ||
		strcmp(gv->instruction[0], "add") == 0 ||
		strcmp(gv->instruction[0], "nop") == 0)
	{
		return;
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n",
			gv->line_number, badopcode);
		kill(NULL);
	}
}
