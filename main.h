#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int handle_binary(va_list args);
int handle_hex(va_list args);
int handle_Hex(va_list args);
int handle_unsigned(va_list args);
int handle_octal(va_list args);

#endif /* MAIN_H */
