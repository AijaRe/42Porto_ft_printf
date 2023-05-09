#ifndef FT_PRINTF_LIB_H
# define FT_PRINTF_LIB_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_check(va_list args, char *string, int i, int *count);
int		ft_printf(const char *format, ...);
void	ft_putnbr_base(int nbr, char *base, int *count);
void	ft_print_ptr(unsigned long long ptr, char *base, int *count);

#endif