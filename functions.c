#include "main.h"


/**
 * handle_binary - handles binary conversion
 * @args: argument passed
 *
 * Return: length of the printed binary
 */

int handle_binary(va_list args)
{
	int bin = va_arg(args, int);

	char buff[65];
	itoa(bin, buff, 2);
	write(1, buff, strlen(buff));
	return (strlen(buff));
}

/**
 * handle_hex - handles hexadecimal conversion
 * @args: argument passed
 *
 * Return: length of the printed hexadeximal
 */

int handle_hex(va_list args)
{
	int hex = va_arg(args, int);

	char buf[30];
	snprintf(buf, sizeof(buf), "%x", hex);
	write(1, buf, strlen(buf));
	return (strlen(buf));
}

/**
 * handle_Hex - handles hexadecimal conversion
 * @args: argument passed
 *
 * Return: length of the printed hexadecimal
 */

int handle_Hex(va_list args)
{
	int Hex = va_arg(args, int);

	char buf[30];
	snprintf(buf, sizeof(buf), "%X", Hex);
	write(1, buf, strlen(buf));
	return (strlen(buf));
}


/**
 * handle_unsigned - handles hexadecimal conversion
 * @args: argument passed
 *
 * Return: length of the printed unsigned int
 */

int handle_unsigned(va_list args)
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
