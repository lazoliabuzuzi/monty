#include "monty.h"
/**
 * nop - does nothing
 * @stack: head of stack
 * @line_number: line number of the instruction
 *
 * Return: No return
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	if (glo.args[1])
	{
		fprintf(stderr, "Usage: nop\n");
		_free();
		exit(EXIT_FAILURE);
	}
}
