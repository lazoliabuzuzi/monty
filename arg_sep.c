#include "monty.h"

/**
 * arg_sep - seperates the command retrieved by getline
 * into seperate arguments
 */
void arg_sep(void)
{
	int args_num = 0;
	char *token;

	glo.args = malloc(sizeof(char *) * 20);

	token = strtok(glo.instrct, " \n\t\r;");
	while (token != NULL)
	{
		glo.args[args_num] = token;
		args_num++;
		if (args_num >= 20)
			break;
		token = strtok(NULL, " \n\t\r;");
	}
	glo.args[args_num] = NULL;
}
