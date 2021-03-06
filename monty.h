#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Main Functions */
int interpreter(char *file);
int execute(stack_t **head, unsigned int line_number, char *code, int number);
int push_checker(char *numstr, unsigned int line_number);
void *smart_alloc(size_t size);
void free_list(stack_t *head);

/* Opcode Functions */
void push_op(stack_t **head, int n);
void pop_op(stack_t **head, unsigned int line_number);
void pall_op(stack_t **head, unsigned int line_number);
void pint_op(stack_t **head, unsigned int line_number);
void swap_op(stack_t **head, unsigned int line_number);
void nop_op(stack_t **head, unsigned int line_number);
void pchar_op(stack_t **head, unsigned int line_number);
void pstr_op(stack_t **head, unsigned int line_number);
void add_op(stack_t **head, unsigned int line_number);
void sub_op(stack_t **head, unsigned int line_number);
void mul_op(stack_t **head, unsigned int line_number);
void div_op(stack_t **head, unsigned int line_number);
void mod_op(stack_t **head, unsigned int line_number);
void rotr_op(stack_t **head, unsigned int line_number);
void rotl_op(stack_t **head, unsigned int line_number);
void stack_op(stack_t **head, unsigned int line_number);
void queue_op(stack_t **head, unsigned int line_number);

#endif
