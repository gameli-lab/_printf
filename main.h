#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int conversion_specifiers(va_list args);
int function_for_dec(va_list args);
int function_for_string(va_list args);
int function_for_char(va_list args);

#endif /* MAIN_H */
