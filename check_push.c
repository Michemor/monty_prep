#include "monty.h"

/**
 * check_push - checks whether second argument passed is a push
 * and whether it has arguments or not
 * @newline: pointer to string containig command
 */
void check_push(char **new_line, unsigned int line_no)
{
	unsigned int num = 0;

	if (strcmp(new_line[0],"push") == 0)
	{
	num = atoi(new_line[1]);
	if (num != 0)
	{
		command_direction(new_line[0], num, line_no);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_no);
		exit(EXIT_FAILURE);
	}
	}
	else
	{
	command_direction(new_line[0], num, line_no);
	}
}
