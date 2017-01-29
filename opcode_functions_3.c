#include "monty.h"
/**
 * mul_op - multiplies first and second to element of stack
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 *
 */
void mul_op(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*head) = (*head)->next;
	(*head)->n = (*head)->n * temp->n;
	free(temp);
}
/**
 * mod_op - computes rest of division of second top elements of stack
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 *
 */
void mod_op(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	temp->next->n = temp->next->n % temp->n;
	pop_op(head, line_number);
}

void pchar_op(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
}

void pstr_op(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
}
