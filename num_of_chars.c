#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
    int len = 0;
    int sum = 0;
    int i = 0;
	va_list args;
    while (format[i] != '\0')
    {
        if (format[i] == '%' && (format[i + 1] == 's' || format[i + 1] == 'c'))
        {
            len++;
        }
        i++;
    }

    va_start(args, format);

    for (i = 0; i < len; i++)
    {
        const char *arg;
        if (format[i * 2 + 1] == 's')
        {
            arg = va_arg(args, const char *);
        }
        else if (format[i * 2 + 1] == 'c')
        {
            va_arg(args, int);
            arg = "";
        }
        sum += strlen(arg);
    }

    va_end(args);
    return sum;
}
