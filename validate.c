#include "monty.h"
#include <stdio.h>

/**
* validate - validate instructions; prints error message
* and exit program if invalid
*
*/

void validate(void)
{


	if (sizeof(gv->instruction) != 2 && strcmp(gv->instruction[0], "push") == 0)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", gv->line_number, gv->instruction[0]);
		kill(NULL);
	}
	else if (sizeof(gv->instruction) == 1 && (
		strcmp(gv->instruction[0], "pall") != 0 ||
		strcmp(gv->instruction[0], "pint") != 0 ||
		strcmp(gv->instruction[0], "pop") != 0 ||
		strcmp(gv->instruction[0], "swap") != 0 ||
		strcmp(gv->instruction[0], "add") != 0 ||
		strcmp(gv->instruction[0], "nop") != 0 ))
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", gv->line_number, gv->instruction[0]);
		kill(NULL);
	}
}
