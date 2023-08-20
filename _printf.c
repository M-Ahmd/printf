#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;
    const char *ptr = format;

    while (*ptr) {
        if (*ptr == '%') {
            ptr++; // Move past the '%'
            if (*ptr == '\0') {
                // Trailing '%' character, break the loop
                break;
            } else if (*ptr == 'c') {
                // Handle %c specifier
                int c = va_arg(args, int);
                putchar(c);
                count++;
            } else if (*ptr == 's') {
                // Handle %s specifier
                char *s = va_arg(args, char*);
                while (*s) {
                    putchar(*s);
                    s++;
                    count++;
                }
            } else if (*ptr == '%') {
                // Handle %% specifier (print '%')
                putchar('%');
                count++;
            }
        } else {
            putchar(*ptr);
            count++;
        }
        ptr++;
    }

    va_end(args);
    return count;
}
