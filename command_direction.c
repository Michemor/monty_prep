#include "monty.h"
/**
 * command_direction - calls command according to string pointed to
 * by cmd pointer
 * @cmd: pointer to command
 * @num: number to be parsed with command
 */
void command_direction(char *cmd, int n, unsigned int line_no)
{
	int i;
	stack_t **stack = NULL;

	instruction_t op[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{NULL, NULL}
	};

	i = 0;
	while (op[i].opcode)
	{
	if (strcmp(cmd, op[i].opcode) == 0)
	{
	op[i].f(stack, n);
	break;
	}
	i++;
	}
}
