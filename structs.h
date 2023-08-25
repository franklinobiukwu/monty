#ifndef STRUCTS_H
#define STRUCTS_H


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct gv_s - global variables
 *
 * @stream: File to read instructions from
 * @instruction: Argument vector
 * @data: Instruction data
 * @line_number: Line number or count of instruction being executed
 * @head: head of linked list (stack or queue)
 * @status: return status of functions in the program
 *
 * Description: global variables of monty interpreter program
 */

typedef struct gv_s
{
	FILE *stream;
	char **instruction;
	int data;
	unsigned int line_number;
	stack_t *head;
	int status;
} gv_t;

#endif /*STRUCTS_H*/
