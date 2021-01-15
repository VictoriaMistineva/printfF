
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_f
{
	char			format;
	int				minus;
	int				zero;
	int				neg_number;
	int				width;
	int				precision;
	int				total_printed;
	int				skipped_chars;
	int				chars_to_print;
	int				prec;

}t_f;

int ft_printf(const char *format, ...);

#endif
