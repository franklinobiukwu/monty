#include "monty.h"

/**
* _strdup - returns pointer to newly allocated space in memory
*
* @str: string parameter
*
* Return: character pointer
*/

char *_strdup(char *str)
{

	/* Create pointer */
	char *ptr;
	int i, j;

	if (str == NULL)
		return (NULL);
	 /* Determine the length of string */
	for (i = 0; str[i] != '\0'; i++)
		;

	/* Create space in memory and assign to pointer */
	ptr = malloc((i * sizeof(char)) + 1);

	/* Return NULL if ptr is NULL */
	if (ptr == NULL)
		return (NULL);

	/* copy str to ptr */

	j = 0;

	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}

	ptr[j] = '\0';


	return (ptr);
}
