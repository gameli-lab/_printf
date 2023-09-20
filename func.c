#include "main.h"

/**
 * handle_char - the function takes one argument
 * @args: the argument being passed
 * Return: 1 to the standard output
 */

int handle_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * handle_string - its a function that handles the strings
 * @args: the argument being passed
 * Return: the length of the string
 */

int handle_string(va_list args)
{
	char *str = va_arg(args, char *);

	int str_len = 0;

	while (str[str_len] != '\0')
		str_len++;
	write(1, str, str_len);
	return (str_len);
}

/**
 * handle_int - the function takes one argument
 * @args: the argument being passed
 * Return: length of the integer
 */

int handle_int(va_list args)
{
	int dec = va_arg(args, int);

	char buff[30];

	snprintf(buff, sizeof(buff), "%d", dec);
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
