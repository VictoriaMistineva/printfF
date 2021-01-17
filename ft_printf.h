
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

int ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_width(**format, t_f *f, va_list *ap);
#endif
