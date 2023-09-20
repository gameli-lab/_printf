#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int handle_hex(va_list args);
int handle_Hex(va_list args);
int handle_address(va_list args);
int handle_unsigned(va_list args);
int print_some(const char *format, va_list args);
int handle_printing(const char *format, va_list args);
int _printf(const char *format, ...);


#endif /* MAIN_H */
