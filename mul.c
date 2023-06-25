#include "monty.h"

/**
 * mul - substract the top from second element
 * @stack: top
 * @line_number: the line num
 */
void mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		error(NULL, 11);

	(*stack)->next->n = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
}
