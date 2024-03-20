#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
* op_add - addition operator
* @a: num1
* @b: num2
* Return: function result
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subtraction operator
* @a: num1
 @b: num2
* Return: function result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiplication operator
* @a: num1
* @b: num2
* Return: function result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - division operator
* @a: num1
* @b: num2
* Return: function result
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - modulo operator
* @a: num1
* @b: num2
* Return: function result
*/
int op_mod(int a, int b)
{
	return (a % b);
}
