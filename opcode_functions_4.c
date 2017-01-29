#include "monty.h"
/**
 * rotl_op - rotates stack to the top
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 */
void rotl_op(stack_t **head, unsigned int line_number)
{
	stack_t *temp, *hold;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp->next != NULL)
		temp = temp->next;
	hold = malloc(sizeof(stack_t));
	if (hold == NULL)
		return;
	hold->n = (*head)->n;
	hold->next = NULL;
	hold->prev = temp;
	temp->next = hold;
	pop_op(head, line_number);

}
/**
 * rotr_op - rotates stack to the bottom
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 *
 */
void rotr_op(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
}
/**
 * stack_op - sets the format of stack to LIFO
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 *
 */
void stack_op(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
}
/**
 * queue_op - sets format of stack to FIFO
 *
 * @head: the list
 * @line_number: line of access
 *
 * Return: void
 *
 */
void queue_op(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
}
