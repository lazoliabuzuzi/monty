#include "monty.h"

/**
 * init_glo - intitializes global variables
 * @glo: adress of global var of type struct
 * Return: 0
 */
int init_glo(variables *glo)
{
	glo->monty = NULL;
	glo->instrct = NULL;
	glo->head = NULL;
	glo->args = NULL;
	glo->line_number = 0;
	return (0);
}
