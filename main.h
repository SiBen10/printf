#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define FIELD_BUF_SIZE 50

#define NULL_STRING "(null)"

#define Z_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

/**
 * struct parameters(z) - parameters(z) struct
 *
 * @unsign: flag if unsigned value
 *
 * @plus_flag: on if plus_flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if _flag specified
 * @zero_flag: on if _flag specified
 * @minus_flag: on if _flag specified
 *
 * @width: field width specified
 * @precision: field precision specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 *
 */

typedef struct parameters(z)
{
	unsigned int unsign			: 1;

	unsigned int plus_flag		: 1;
	unsigned int space_flag		: 1;
	unsigned int hashtag_flag	: 1;
	unsigned int zero_flag		: 1;
	unsigned int minus_flag		: 1;

	unsigned int width;
	unsigned int precision;

	unsigned int h_modifier		: 1;
	unsigned int l_modifier		: 1;
} z_t;

/**
 * struct specifier - Struct token
 *
 * @specifier: format token
 * @f: The function associated
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, z_t *);
} specifier_t;

/* _put.c module */
int _puts(char *str);
int _putchar(int c);

int print_char(va_list y, z_t *z);
int print_int(va_list y, z_t *z);
int print_string(va_list y, z_t *z);
int print_percent(va_list y, z_t *z);
int print_S(va_list y, z_t *z);

char *convert(long int num, int base, int flags, z_t *z);
int print_unsigned(va_list y, z_t *z);
int print_address(va_list y, z_t *z);

int (*get_specifier(char *s))(va_list y, z_t *z);
int get_print_func(char *s, va_list y, z_t *z);
int get_flag(char *s, z_t *z);
int get_modifier(char *s, z_t *z);
char *get_width(char *s, z_t *z, va_list y);

int print_hex(va_list y, z_t *z);
int print_HEX(va_list y, z_t *z);
int print_binary(va_list y, z_t *z);
int print_octal(va_list y, z_t *z);

int print_from_to(char *start, char *stop, char *except);
int print_rev(va_list y, z_t *z);
int print_rot13(va_list y, z_t *z);

int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, z_t *z);
int print_number_right_shift(char *str, z_t *z);
int print_number_left_shift(char *str, z_t *z);


void init_z(z_t *z, va_list y);

char *get_precision(char *p, z_t *z, va_list y);

int _printf(const char *format, ...);

#endif
