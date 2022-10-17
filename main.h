#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
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

int p_char(va_list args);

int p_str(va_list args);

#endif
