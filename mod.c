#include "monty.h"

/**
 * mod - divides the top two elements of stack
 * @stack: top
 * @line_number: the line num
 */
void mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		error(NULL, 10);
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		_free();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
}
