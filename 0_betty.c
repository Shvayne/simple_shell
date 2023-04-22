#include <stdio.h>

/**
 * add - adds two numbers and returns the result
 *
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the sum of num1 and num2
 */

int add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int sum = add(num1, num2);

	printf("the sum of %d and %d is %d\n", num1, num2, sum);

	return (0);
}
