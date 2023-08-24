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
		free(gv);
	}
	exit(EXIT_FAILURE);
}


/**
* list_free_s - frees a stack_t type linked list
*
* @head: pointer to head of the list
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
* @head: pointer to head of the list
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
