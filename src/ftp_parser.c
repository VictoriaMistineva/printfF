#include "ft_printf.h"

static int 	take_precision(const char **format, t_flags *flags)//точность
{
	if (*(*format)++ == '.')
	{
		flags->precision.value = ft_atoi(*format);
		flags->precision.is_specified = 1;
		while (ft_isdigit(**format))
			(*format)++;
		return 1;
	}
	return 0;
}

static int 	take_width(const char **format, t_flags *flags)
{
	if (**format != '0' && ft_isdigit(**format))
	{
		flags->width.value = ft_atoi(*format);
		flags->width.is_specified = 1;
		while (ft_isdigit(**format))
			(*format)++;
		return 1;
	}
	return 0;
}

static int 	take_minus(const char **format, t_flags *flags)
{
	if (**format == '-')
	{
		flags->minus = 1;
		(*format)++;
		return (1);
	}
	return (0);
}

static int 	take_zero(const char **format, t_flags *flags)
{
	if (**format == '0' && !flags->width.is_specified)
	{
		flags->zero = 1;
		(*format)++;
		return (1);
	}
	return (0);
}

static int 	take_space(const char **format, t_flags *flags)
{
	if (**format == ' ')
	{
		flags->space = 1;
		(*format)++;
		return (1);
	}
	return (0);
}

const char	*parse_conversion(const char *format, va_list *args, t_flags *flags)
{
	while (ft_strchr(PARSE_CHARS, *format))
	{
		take_zero(&format, flags) ||
		take_minus(&format, flags) ||
		take_space(&format, flags) ||
		take_width(&format, flags) ||
		take_precision(&format, flags);
	}
	if (ft_strchr(CONVERSION_CHARS, *format))
		flags->conv = *format;
	return ((*format) ? format + 1 : format);
}
