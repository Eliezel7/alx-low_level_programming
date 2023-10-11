#include "main.h"

/**
 * print_sign - Print the sigh of a number
 * @n: The number to be cheked
 * Return: 1 for positive nums, -1 for negative numbs or zero for anything else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
