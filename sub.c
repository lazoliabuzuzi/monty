#include "monty.h"

/**
 * sub - substract the top from second element
 * @stack: top
 * @line_number: the line num
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		error(NULL, 8);

	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
}
