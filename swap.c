#include "monty.h"

/**
 * swap - swaps the top two elements of stack
 * @stack: top
 * @line_number: the line num
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	(void)line_number;
	if (*stack == NULL || (*stack)->next == NULL)
		error(NULL, 7);

	tmp = (*stack)->next->n;
	(*stack)->next->n = (*stack)->n;
	(*stack)->n = tmp;
}
