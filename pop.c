#include "monty.h"

/**
 * pop - pops an element off the stack
 * @stack: top of tsack
 * @line_number: the line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		_free();
		exit(EXIT_FAILURE);
	}
	if (glo.args[1] != NULL)
	{
	        _free();
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	*stack = tmp->next;

	if (tmp->next)
		tmp->next->prev = NULL;
	free(tmp);
}
