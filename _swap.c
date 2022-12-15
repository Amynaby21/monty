#include "monty.h"

/**
 * _swap - Swaps the top two elements of the stack
 * @stack: A pointer to the top of the stcak
 * @line_number: Line number of the bytecode
 *
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *nOde = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	nOde = (*stack)->next;
	if (nOde->next != NULL)
	{
		(*stack)->next = nOde->next;
		(*stack)->next->prev = *stack;
	}
	else
	{
		nOde->prev->prev = nOde;
		nOde->prev->next = NULL;
	}
	nOde->prev = NULL;
	nOde->next = *stack;
	(*stack) = nOde;
}
