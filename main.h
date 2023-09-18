#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int handle_char(va_list args);
int handle_string(va_list args);
int handle_dec(va_list args);

int _printf(const char *format, ...);

#endif /* MAIN_H */
