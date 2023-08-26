#include "monty.h"

#define SIZE 1024

/**
* readline - function that reads a line of a instruction
* from a file
*
* Return: 0 on success, 1 on newline, 2 on error
*/

int readline(void)
{
	char *line;
	char buff[SIZE];

	/*Read a line from stream*/
	line = fgets(buff, SIZE, gv->stream);

	/*Exit program if EOF is reached*/
	if (line == NULL)
	{
		if (feof(gv->stream))
			return (2);
		kill("Error: Failed to read line from file");
	}

	/*Return 1 if line is newline character*/
	if (strcmp(line, "\n") == 0)
		return (1);

	/*VALIDATE INSTRUCTION*/
	/*Clean and tokenize instruction*/
	gv->instruction = tokenize(line, " \t\n");
	/*Return 1 if instruction is blank spaces*/
	if (gv->instruction == NULL || gv->instruction[0] == NULL)
	{
		free(gv->instruction);
		return (1);
	}
	/*Validate instructions*/
	validate();
	return (0);
}
