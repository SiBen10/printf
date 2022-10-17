#include "main.h"

/**
 * print_from_to - prints a range of char addresses
 * @A: starting add
 * @Z: stopping add
 * @Pipi: Pipi add
 *
 * Return: number bytes printed
 */
int print_from_to(char *A, char *Z, char *Pipi)
{
	int sum = 0;

	while (A <= Z)
	{
		if (A != Pipi)
			sum += _putchar(*A);
		A++;
	}
	return (sum);
}

/**
 * print_rev - prints string in reverse
 * @y: string
 * @z: the parameters struct
 *
 * Return: success 1
 */
int print_rev(va_list y, z_t *z)
{
	int ben, sum = 0;
	char *str = va_arg(y, char *);
	(void)z;

	if (str)
	{
		for (ben = 0; *str; str++)
			ben++;
		str--;
		for (; ben > 0; ben--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - prints string in rot13
 * @y: string
 * @z: the parameters(z) struct
 *
 * Return: success 1
 */
int print_rot13(va_list y, z_t *z)
{
	int i, ben;
	int count = 0;
	char arr[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ      abcdefghijklmnopqrstuvwxyz";
	char *a = va_arg(y, char *);
	(void)z;

	i = 0;
	ben = 0;
	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z')
		    || (a[i] >= 'a' && a[i] <= 'z'))
		{
			ben = a[i] - 65;
			count += _putchar(arr[ben]);
		}
		else
			count += _putchar(a[i]);
		i++;
	}
	return (count);
}
