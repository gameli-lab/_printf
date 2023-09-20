#include "main.h"

/**
 * handle_unsigned_int - handles hexadecimal conversion
 * @args: argument passed
 *
 * Return: length of the printed unsigned int
 */

int handle_unsigned_int(va_list args)
{
	unsigned int un = va_arg(args, unsigned int);

	char buf[30];

	snprintf(buf, sizeof(buf), "%u", un);
	write(1, buf, strlen(buf));
	return (strlen(buf));
}

/**
 * handle_octal - handles octal conversion
 * @args: argument passed
 *
 * Return: length of the printed octal
 */

int handle_octal(va_list args)
{
	unsigned int oct = va_arg(args, unsigned int);

	char buf[30];

	snprintf(buf, sizeof(buf), "%o", oct);
	write(1, buf, strlen(buf));
	return (strlen(buf));
}
/**
 * handle_address - handles address
 * @args: argument passed
 *
 * Return:length of address
 */
int handle_address(va_list args)
{
	void *ptr = va_arg(args, void *);

	char buff[65];

	snprintf(buff, sizeof(buff), "%p", ptr);
	write(1, ptr, strlen(buff));
	return (strlen(buff));
}

/**
 * handle_printing - prints the formatted strings
 * @format: formatted string
 * @args: argument passed
 *
 * Return: lenth of the string printed
 */


int handle_printing(const char *format, va_list args)
{
	int i = 0, k = 0;

	if (format[k] == '%')
	{
		write(1, "%", 1);
		i++;
	}
	else if (format[k] == 'c')
	{
		i += handle_char(args);
	}
	else if (format[k] == 's')
	{
		i += handle_string(args);
	}
	else if (format[k] == 'd' || format[k] == 'i')
	{
		i += handle_int(args);
	}
	else if (format[k] == 'o')
	{
		i += handle_octal(args);
	}
	else if (format[k] == 'u')
	{
		i += handle_unsigned_int(args);
	}
	else if (format[k] == 'h')
        {
                i += handle_hex(args);
        }
        else if (format[k] == 'H')
        {
                i += handle_Hex(args);
        }
        else if (format[k] == 'p')
        {
                i += handle_address(args);
        }
	else
	{
		write(1, "%", 1);
		write(1, format, 1);
		i++;
	}
	return (i);
}
