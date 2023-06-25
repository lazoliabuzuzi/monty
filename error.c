#include "monty.h"
/**
 * error - prints the error msg to stderr
 * @av1: file name
 * @a: the error specifier
 */
void error(char *av1, int a)
{
	if (a == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		_free();
		exit(EXIT_FAILURE);
	}
	else if (a == 2)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av1);
		_free();
		exit(EXIT_FAILURE);
	}
	else if (a == 4)
	{
		fprintf(stderr, "Error: malloc failed\n");
		_free();
		exit(EXIT_FAILURE);
	}
}	
