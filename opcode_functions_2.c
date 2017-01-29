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


	if (*head != NULL && (*head)->next != NULL)
	{
<<<<<<< HEAD
		(*head) = (*head)->next;
=======
		temp = *head;
		*head = (*head)->next;
>>>>>>> b9364eca801107aada039c16a07317a070c2b30e
		(*head)->n = temp->n + (*head)->n;
		(*head)->prev = NULL;
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


	if (*head != NULL && (*head)->next != NULL)
	{
<<<<<<< HEAD
		(*head) = (*head)->next;
=======
		temp = *head;
		*head = (*head)->next;
>>>>>>> b9364eca801107aada039c16a07317a070c2b30e
		(*head)->n = (*head)->n - temp->n;
		(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
/**
 * div_op - divide second top element by top element
 *
 * @head: the list
 * @line_number: line of acces
 *
 * Return: void
 */
void div_op(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int hold;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		printf("L%d: division by zero\n", temp->n);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	temp->next->n /= temp->n;
	pop_op(head, line_number);
}
