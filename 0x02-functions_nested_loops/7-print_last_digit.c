#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last gigit of a number
 */

int print_last_digit(int n)
{
	if (n > 0)
		n *= -1;
	_putchar('0' + (n % 100));

	return (n % 10);
}
