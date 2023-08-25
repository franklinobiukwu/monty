#include "monty.h"

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
	char *token, *str_cpy;
	int i, count = 0;

	if (str == NULL || delim == NULL)
		kill("Error: Input string or Delimiter string is empty!");

	str_cpy = _strdup(str);
	if (str_cpy == NULL)
		kill("Error: strdup failed");

	token = strtok(str_cpy, delim);

	while (token)
	{
		count++;
		token = strtok(NULL, delim);
	}
	/*free duplicated string*/
	free(str_cpy);

	/*Create memory for tokenized strings*/
	str_ptr = malloc(sizeof(char *) * (count + 1));

	/*exit if malloc fails*/
	if (str_ptr == NULL)
		kill("Error: malloc failed");

	/*tokenize string*/
	token = strtok(str, delim);

	i = 0;
	while (token)
	{
		str_ptr[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	str_ptr[i] = NULL;
	return (str_ptr);
}
