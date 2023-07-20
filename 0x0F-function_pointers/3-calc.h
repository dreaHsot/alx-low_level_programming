#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct operations - matches operators with their function
 * @op: operators
 * @fp: corresponding function
 */

struct operations
{
	char *op;
	int (*fp)(int a, int b);
};

typedef struct operations op_t;

#endif
