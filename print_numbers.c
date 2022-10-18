#include "main.h"

/**
 * p_nums - Prints digits of a number
 *
 * @args: Argument to print
 *
 * Return: Lenght of character printed
 */
int p_nums(va_list args)
{
	int len = 0, div = 1;
	unsigned int num;
	int n = va_arg(args, int);

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * p_uns_int - Prints Unsigned integers
 *
 * @args: Argument to print
 *
 * Return: Lenght of characters to be printed
 */
int p_uns_num(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (print_uns_num(num));

	return (print_uns_num(num));
}

/**
 * print_uns_num - Prints an unsigned number
 *
 * @n: Argument to print
 *
 * Return: Lenght of character to be printed
 */
int print_uns_num(unsigned int n)
{
	int div = 1, len = 0;
	unsigned int num;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar((num / div) + '0');
		num %= div;
		div /= 10;
	}

	return (len);
}
