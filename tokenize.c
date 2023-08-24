#include "monty.h"
#include <string.h>

/**
* tokenize - tokenizes a string
*
* @str: string to tokenize
* @delim: string delimeters
*
* Return: pointer to tokenized strings
*/

char **tokenize(char *str, const char *delim)
{
	char **str_ptr = NULL;
	char *saveptr = NULL;
	char *token;
	int i, count = 0;
	char *str_cpy;

	if (str == NULL || delim == NULL)
		kill("Error: Input string or Delimiter string is empty!");

	str_cpy = strdup(str);
	if (str_cpy == NULL)
		kill("Error: strdup failed");

	token = strtok_r(str_cpy, delim, &saveptr);

	while (token)
	{
		count++;
		token = strtok_r(NULL, delim, &saveptr);
	}

	/*free duplicated string*/
	free(str_cpy);

	/*Create memory for tokenized strings*/
	str_ptr = malloc(sizeof(char *) * (count + 1));

	/*exit if malloc fails*/
	if (str_ptr == NULL)
		kill("Error: malloc failed");

	/*tokenize string*/
	token = strtok_r(str, delim, &saveptr);

	i = 0;

	while (token)
	{
		str_ptr[i] = token;
		token = strtok_r(NULL, delim, &saveptr);
		i++;
	}
	str_ptr[i] = NULL;

	return (str_ptr);
}
