#include "main.h"

/**
 * init_z - clears struct fields and reset buf
 * @z: the parameters struct
 * @y: the argument pointer
 * Return: void
 */

void init_z(z_t *z, va_list y)
{
	z->unsign = 0;

	z->plus_flag = 0;
	z->space_flag = 0;
	z->hashtag_flag = 0;
	z->zero_flag = 0;
	z->minus_flag = 0;

	z->width = 0;
	z->precision = UINT_MAX;

	z->h_modifier = 0;
	z->l_modifier = 0;
	(void)y;
}
