#include "monty.h"

variables glo;

/**
 * main - entry point
 * @ac: number of arguments in CLI
 * @av: array of arguments
 * Return: 0 success
 */
int main(int ac, char **av)
{
	if (ac != 2)
		error(av[1], 1);

	init_glo(&glo);

	glo.monty = fopen(av[1], "r");
	if (glo.monty == NULL)
		error(av[1], 2);

	while (1)
	{
		get_opcode();
		glo.line_number++;

		if (glo.instrct == NULL)
			break;

		arg_sep();

		if (strncmp(glo.args[0], "#", 1) == 0)
			continue;
		if (glo.args[0] == NULL)
			continue;
		opcode_parser(&glo);
	}
	_free();
	return (0);
}
