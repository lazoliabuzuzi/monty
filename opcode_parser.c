#include "monty.h"
/**
 * opcode_parser - selects the right function to execute
 * @glo: global variable
 */

void opcode_parser(variables *glo)
{
	int i;
	int flag;
	instruction_t funcs[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"nop", nop},
		{"pop", pop},
		{"add", add},
		{"swap", swap},
		{NULL, NULL}
	};

	for (i = 0; funcs[i].opcode != NULL; i++)
	{
		if (strcmp(glo->args[0], funcs[i].opcode) == 0)
		{
			funcs[i].f(&glo->head, glo->line_number);
			flag = 0;
			return;
		}
		flag = 1;
	}
	if (flag == 1 && strncmp(glo->args[0], "#", 1) != 0)
	{
		error(NULL, 3);
	}
}
