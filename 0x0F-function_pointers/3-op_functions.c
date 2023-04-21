#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - calcul sum of two numbers
 * @a: number 1
 * @b: number 2
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calcul sub of two numbers
 * @a: number 1
 * @b: number 2
 * Return: sub  of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calcul multiplication of two numbers
 * @a: number 1
 * @b: number 2
 * Return: mul of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calcul division of two numbers
 * @a: number 1
 * @b: number 2
 * Return: div of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calcul modulation of two numbers
 * @a: number 1
 * @b: number 2
 * Return: mod  of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
