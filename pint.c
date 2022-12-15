#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: A pointer to the top of the stack
 * @line_number: Line number of the bytecode
 *
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
