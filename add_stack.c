<<<<<<< HEAD
#include "monty.h"
=======
i#include "monty.h"
>>>>>>> eb2c07bce4d74d19215e0144853fd13ffb8da388
/**
 * add - add a new node at the beginning of a list
 * @stack: a struct node pointer to the list
 * @line_number: data to enter the list
 * Return: an update linked list
 */
void add(stack_t **stack, unsigned int);
{
<<<<<<< HEAD
    stack_t *new_node;
=======
    stack_t *next_node;
>>>>>>> eb2c07bce4d74d19215e0144853fd13ffb8da388
    int num;

    if (mont->arr[1] == NULL || !is_digit(mont->arr[1]))
    {
        fprintf(stderr, "L %d: usage: push integer\n", line_number);
        free_stack(stack);
        free_array();
        fclose(mont->file);
        free(mont);
        exit(EXIT_FAILURE);
    }
    num = (int)atoi(mont->arr[1]);
<<<<<<< HEAD
    new_node = malloc(sizeof(stack_t));
    if (!new_node)
        malloc_error();
    new_node->n = num;
    if (*stack == NULL)
    {
        new_node->prev = NULL;
        new_node->next = NULL;
    }
    else
    {
        new_node->next = *stack;
        (*stack)->prev = new_node;
    }
    *stack = new_node;
=======
    next_node = malloc(sizeof(stack_t));
    if (!next_node)
        malloc_error();
    next_node->n = num;
    if (*stack == NULL)
    {
        next_node->prev = NULL;
        next_node->next = NULL;
    }
    else
    {
        next_node->next = *stack;
        (*stack)->prev = next_node;
    }
    *stack = next_node;
>>>>>>> eb2c07bce4d74d19215e0144853fd13ffb8da388
    
}
/**
 * is_digit - checks if the command is a digit
 * @c: a single pointer
 * Return: return an integer
 */

int is_digit(char *c)
{
    int i = 0;

    if (c[0] == '-')
        i = 1;

    while (c[i] != '\0')
    {
        if (!isdigit(c[i]))
            return (0);
        i++;
    }
    return (1);
}

/**
 * find_entry - let program discover entry point
 * @stack: a stack node list
 * @line_number: opcode line number
 */
void find_entry(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    if (strcmp(mont->arr[0], "queue") == 0)
        mont->entry = 1;
    else
        mont->entry = 0;
}

/**
 * end_stack - add node to the end of list
 * @stack: a stack pointer
 * @line_number: opcode line number
 */
void end_stack(stack_t **stack, unsigned int line_number)
{
<<<<<<< HEAD
    stack_t *new_node, *current;
=======
    stack_t *next_node, *current;
>>>>>>> eb2c07bce4d74d19215e0144853fd13ffb8da388
    int num;

    if (mont->arr[1] == NULL || !is_digit(mont->arr[1]))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        free_stack(stack);
        free_array();
        fclose(mont->file);
        free(mont);
        exit(EXIT_FAILURE);
    }
    num = (int)atoi(mont->arr[1]);
    current = *stack;
<<<<<<< HEAD
    new_node = malloc(sizeof(stack_t));
    if (!new_node)
        malloc_error();
    new_node->n = num;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (*stack == NULL)
        *stack = new_node;
=======
    next_node = malloc(sizeof(stack_t));
    if (!next_node)
        malloc_error();
    next_node->n = num;
    next_node->next = NULL;
    next_node->prev = NULL;
    if (*stack == NULL)
        *stack = next_node;
>>>>>>> eb2c07bce4d74d19215e0144853fd13ffb8da388
    else
    {
        while (current && current->next)
            current = current->next;
<<<<<<< HEAD
        current->next = new_node;
        new_node->prev = current;
=======
        current->next = next_node;
        next_node->prev = current;
>>>>>>> eb2c07bce4d74d19215e0144853fd13ffb8da388
    }
}
