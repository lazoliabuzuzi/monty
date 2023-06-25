#include "monty.h"
/**
 * push - inserts a new element on stack/queue
 * @stack: head of stack
 * @line_number: number of the line
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	if (glo.args[1] == NULL)
		error(NULL, 5);
	else if (atoi(glo.args[1]) == 0 && strcmp(glo.args[1], "0") != 0)
		error(NULL, 5);

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(glo.args[1]);

	if (*stack)
	{
		(*stack)->prev = new;
	}
	new->next = *stack;
	new->prev = NULL;
	*stack = new;
}

