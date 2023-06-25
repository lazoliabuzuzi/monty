#include "monty.h"
/**
 * error - prints the error msg to stderr
 * @av1: file name
 * @a: the error specifier
 */
void error(char *av1, int a)
{
	if (a == 1)
		fprintf(stderr, "USAGE: monty file\n");
	else if (a == 2)
		fprintf(stderr, "Error: Can't open file %s\n", av1);
	else if (a == 3)
	{	
		fprintf(stderr, "L%u: unknown instruction ", glo.line_number);
		fprintf(stderr, "%s\n", glo.args[0]);
	}
	else if (a == 4)
		fprintf(stderr, "Error: malloc failed\n");
	else if (a == 5)
		fprintf(stderr, "L%u: usage: push integer\n", glo.line_number);
	else if (a == 6)
		fprintf(stderr, "L%u: can't add, stack too short\n", glo.line_number);
	else
		fprintf(stderr, "L%u: can't swap, stack too short\n", glo.line_number);

	_free();
	exit(EXIT_FAILURE);
}
