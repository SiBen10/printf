#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return:( str-a)
 */
int _puts(char *str)
{
	char *a = str;/*declaration of variables*/

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - writes the character Pip to stdout
 * @Pipi:  print out this character
 *
 * Return: On success 1
 */
int _putchar(int Pipi)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (Pipi == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (Pipi != BUF_FLUSH)
		buf[i++] = Pipi;
	return (1);
}
