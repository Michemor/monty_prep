#include "monty.h"

/**
 * push - creates a linked list and push items to it
 * @stack: pointer to an item on the stack
 * @line_number: line number
 */
void push_stack(stack_t **stack, unsigned int line_no)
{	
	stack_t *top;
	stack_t *new = NULL;

	new = create_node(line_no);

	if (stack ==  NULL)
	{
	*stack = new;
	top = new;
	}
	else
	{
	while ();
	}
}


stack_t *create_node(int n)
{
	stack_t *node = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
