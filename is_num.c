#include "monty.h"
/**
 * is_num - check if string is number or not
 * @string: Num string
 * Return: 0 Success, 1 Failed
 */
int is_num(char *op_arg)
{
	int i;

	for (i = 0; op_arg[i]; i++)
	{
		if (op_arg[i] < 48 || op_arg[i] > 57)
			return (1);
	}
	return (0);
}
