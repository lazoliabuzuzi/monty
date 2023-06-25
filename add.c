#include "monty.h"

/**
 * add - adds the top two elements of stack
 * @stack: top
 * @line_number: the line num
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		error(NULL, 6);

	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
}
