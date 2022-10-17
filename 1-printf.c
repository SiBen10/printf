#include "main.h"

/**
 * _printf - functions to prints and input into the standard output
 * @format: the format string
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)

{
	int sum = 0;
	va_list y;
	char *p, *start;

	z_t z = Z_INIT;

	va_start(y, format);

	if (!format || (format[0] == '%' && !format[1]))/* checking for NULL char */
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = (char *)format; *p; p++)
	{
		init_z(&z, y);
		if (*p != '%')/*checking for the % specifier*/
		{
			sum += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		while (get_flag(p, &z)) /* initializing while loop */
		{
			p++; 
		}
		p = get_width(p, &z, y);
		p = get_precision(p, &z, y);
		if (get_modifier(p, &z))
			p++;
		if (!get_specifier(p))
			sum += print_from_to(start, p,
					z.l_modifier || z.h_modifier ? p - 1 : 0);
		else
			sum += get_print_func(p, y, &z);
	}
	_putchar(BUF_FLUSH);
	va_end(y);
	return (sum);
}
