#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 * Return: fractorial of n
*/
int factorial(int a)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
