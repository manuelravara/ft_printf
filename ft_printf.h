#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

int	print_char(int c);
size_t	print_str(char *str);
int	print_lower_digit(long n, int base);
int	print_upper_digit(long n, int base);
int	print_lower_base(size_t n);
int	print_pointer(void *ptr);
int	print_format(char specifier, va_list ap);
int	ft_printf(const char *format, ...);

#endif