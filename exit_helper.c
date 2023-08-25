#include "monty.h"

/**
* kill - print errors, free memories and exit process
*
* @message: error message to be printed
*
*/

void kill(const char *message)
{
	if (gv != NULL)
	{
		if (message != NULL)
			fprintf(stderr, "%s\n", message);
		if (gv->stream != NULL)
			fclose(gv->stream);
		if (gv->instruction != NULL)
			free_arr(gv->instruction);
		if (gv->head != NULL)
			free_stack();
		/*Free the global variable struct*/
		/*free(gv);*/
	}
	exit(EXIT_FAILURE);
}


/**
* free_stack - frees a stack_t type linked list
*
*/

void free_stack(void)
{
	stack_t *prev;

	while (gv->head != NULL)
	{
		prev = gv->head;
		gv->head = gv->head->next;
		free(prev);
	}
}


/**
* free_arr - frees a string type linked list
*
* @arr: pointer to head of list/array
*
*/

void free_arr(char **arr)
{
	int i;

	if (arr != NULL)
	{
		for (i = 0; arr[i]; i++)
			free(arr[i]);

		free(arr);
	}
}
