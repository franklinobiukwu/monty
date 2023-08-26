#include "monty.h"
#include "structs.h"
#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

void no_betty(void);

/*DECLARE GLOBAL VARIABLE*/
struct gv_s *gv;
struct instruction_s inst;

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
	char message[SIZE];

	/*CREATE DYNAMIC MEMORY FOR GLOBAL VARIABLE POINTER*/
	gv = (struct gv_s *)malloc(sizeof(struct gv_s));

	/*DEFINE/INITIALIZE GLOBAL VARIABLES*/
	gv->line_number = 0;
	gv->head = NULL;
	gv->stream = NULL;
	gv->instruction = NULL;

	/* VALIDATE USAGE */
	if (argc != 2)
	{
		sprintf(message, "USAGE: monty file");
		kill(message);
	}

	/*Open file*/
	gv->stream = fopen(argv[1], "r");
	/*exit if file does not open*/
	if (gv->stream == NULL)
	{
		sprintf(message, "Error: Can't open file %s", argv[1]);
		kill(message);
	}

	/*LOOP TO READ EACH LINE OF FILE*/
	do {
		/*Increment line number*/
		gv->line_number++;

		/* Read and validate instruction line */
		gv->status = readline();
		/*continue if line is newline or blank*/
		if (gv->status == 1)
		{
			/*set status to 0 so that loop condition is met*/
			gv->status = 0;
			continue;
		}
		if (gv->status == 2)
			break;

		/* Execute instruction */
		gv->status = execute();

	} while (gv->status == 0);
/*	fclose(gv->stream);*/
/*	free_stack();*/
/*	free(gv);*/
	clean_up(NULL);

	return (0);
}

/**
* do_betty - do betts
* Return: void
*/
void do_betty(void)
{
}
