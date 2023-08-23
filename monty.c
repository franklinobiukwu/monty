#include "monty.h"
#include "structs.h"
#include <stdlib.h>


/**
* main - This program is a monty byte code interpreter
*
* @argc: Argument count
* @argv: Arguement vector
*
* Return: 1 on success, and 0 on failure
*/

int main(int argc, char **argv)
{
	/*CREATE DYNAMIC MEMORY FOR GLOBAL VARIABLE POINTER*/
	struct gv_s *gv = (struct gv_s *)malloc(sizeof(struct gv_s));


	/* VALIDATE USAGE */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	/*DEFINE/INITIALIZE GLOBAL VARIABLES*/
	gv->line_number = 0;
	gv->head = NULL;
	gv->av = argv;

	/*LOOP TO READ EACH LINE OF FILE*/
	do {
		/* Read and validate instruction line */
		/* Execute instruction */
	} while (gv->status != 0);
}
