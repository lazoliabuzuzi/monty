#include "monty.h"
/**
 * _free - frees everything
 *
 *
 *
 */
void _free(void)
{
	if (glo.instrct != NULL)
		free(glo.instrct);
	if (glo.monty != NULL)
		fclose(glo.monty);
	if (glo.head != NULL)
	{
		while (glo.head->next != NULL)
		{
			glo.head = glo.head->next;
			free(glo.head->prev);
		}
		free(glo.head);
	}
}
