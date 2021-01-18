
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_f
{
	char			format;
	int				minus;
	int				zero;
	int				width;
	int				precision;
	int 			star;
}t_f;

void	ft_struct(t_f *f);
int ft_printf(const char *format, ...);

//либв
int	ft_putchar(char c);
int	ft_isdigit(int c);

void	ft_width(const char *format, t_f *f, va_list *ap);
void	ft_digit(const char *format, t_f *f, va_list *ap);
#endif
