#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_variables - global variables
 * @monty: the monty file
 * @instrct: the instruction
 * @head: the top of the stack
 * @args: array of args from instrct
 * @line_number: the num of the line we are on
 */
typedef struct global_variables
{
	FILE *monty;
	char *instrct;
	stack_t *head;
	char **args;
	unsigned int line_number;
} variables;

extern variables glo;

/** function declarations **/
void arg_sep(void);
void get_opcode(void);
int allowed(char *str);
void opcode_parser(variables *glo);
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
stack_t *new_node(stack_t **stack, int *n);
void error(char *av1, int a);
void nop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, __attribute__((unused)) unsigned int line_number);
int is_num(char *op_arg);
void pop(stack_t **stack, unsigned int line_number);
int init_glo(variables *glo);
void add(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void divv(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void _free(void);

#endif
