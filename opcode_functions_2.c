#include "monty.h"
/**
 * add_op - add two elements of doubly linked list together
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 *
 */
void add_op(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	temp = *head;
	if ((*head) != NULL && (*head)->next != NULL)
	{
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
		(*head) = (*head)->next;
		(*head)->n = temp->n + (*head)->n;
		free(temp);
	}
	else
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
/**
 * nop_op - a function that does nothing
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 *
 */

void nop_op(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
	return;
}
/**
 * sub_op - subtract first two elements of doubly linked list
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 *
 */
void sub_op(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	temp = *head;
	if ((*head) != NULL && (*head)->next != NULL)
	{
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
		(*head) = (*head)->next;
		(*head)->n = (*head)->n - temp->n;
		free(temp);
	}
	else
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}

void div_op(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
}
