#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct arg_types - Struct op
*
* @ch: The operator
* @dt: The function associated
*/
typedef struct arg_types
{
	char ch;
	int (*dt)(va_list args);
} args_t;


/* Functions Prototypes */
int _printf(const char *format, ...);

int _putchar(char c);

int print_uns_num(unsigned int n);

int hex_check(int num, char case_type);

int p_char(va_list args);

int p_str(va_list args);

int p_nums(va_list args);

int dec_to_bin(va_list args);

int p_uns_int(va_list args);

int dec_to_oct(va_list args);

int dec_to_hex(va_list args);

int dec_to_HEX(va_list args);

#endif
