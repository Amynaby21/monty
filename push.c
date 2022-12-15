#include "monty.h"

/**
 * _push - Pushes an integer to the stack
 * @stack: A pointer to the top of the stack
 * @line_number: Line number of bytecode
 *
 */

void _push(stack_t **stack, unsigned int line_number)
{
	char *str;
	int n;

	if (str == NULL)
		return;
	if (_is_digit(n) == -1)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE)
	}
	else
	{
		if (_add_node(stack, atoi(n)) == -1)
		{
			exit(EXIT_FAILURE);
		}
	}
}
