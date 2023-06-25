#include "monty.h"
/**
 * get_opcode - gets the opcode from the monty bytecode file
 */
void get_opcode(void)
{
	size_t n = 0;
	ssize_t read;

	read = getline(&glo.instrct, &n, glo.monty);
	if (read == -1)
	{
		/*free(glo.instrct);*/
		exit(EXIT_FAILURE);
	}
	glo.instrct[read - 1] = '\0';

}
