#include "main.h"

/**
*write_char - ............
*@c:......................
*@len:....................
*Return:.................
*/
static void write_char(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

/**
*write_string - ............
*@str:......................
*@len:....................
*Return:.................
*/
static void write_string(const char *str, int *len)
{
	int str_len = 0;

	while (str[str_len] != '\0')
	str_len++;

	write(1, str, str_len);
	(*len) += str_len;
}
/**
*handle_char - ............
*@args:......................
*@form_len:....................
*Return:.................
*/
static void handle_char(va_list args, int *form_len)
{
	char c = va_arg(args, int);

	write_char(c, form_len);
}
/**
*handle_string - ............
*@args:......................
*@form_len:....................
*Return:.................
*/
static void handle_string(va_list args, int *form_len)
{
	char *str = va_arg(args, char*);

	write_string(str, form_len);
}
/**
*_printf - ............
*@format:......................
*Return:.................
*/
int _printf(const char *format, ...)
{
	int form_len = 0;
	va_list args;

	if (format == NULL)
	return (-1);

	va_start(args, format);

	while (*format)
	{
	if (*format != '%')
	{
	write_char(*format, &form_len);
	}
	else
	{
	format++;
	if (*format == '\0')
	break;

	if (*format == '%')
	{
	write_char(*format, &form_len);
	}
	else if (*format == 'c')
	{
	handle_char(args, &form_len);
	}
	else if (*format == 's')
	{
	handle_string(args, &form_len);
	}
	}

	format++;
	}
	va_end(args);
	return (form_len);
}

