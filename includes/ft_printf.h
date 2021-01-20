
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"

# define PARSE_CHARS "0123456789 *.-"
# define CONVERSION_CHARS "cspdiuxX%"
# define BOOL(x) ((x) ? "true" : "false")

typedef struct	s_param
{
	int 		value;
	int 		is_specified;
}				t_param;

typedef struct	s_flags
{
	char 		conv;
	int			minus;
	int			zero;
	int 		space;
	t_param 	width;
	t_param 	precision;
}				t_flags;

typedef struct	s_type
{

}				t_type;

int				ft_printf(const char *format, ...);

const char		*parse_conversion(const char *format, va_list *args, t_flags *flags);
const char 		*parse_type(const char *format, va_list *args, t_flags *flags);

#endif
