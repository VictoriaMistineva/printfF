#include "ft_printf.h"

static const char	*resolve_conversion(const char *format, va_list *args, int *out)
{
	const char	*format_after_parse;
	t_flags		flags;

	ft_bzero(&flags, sizeof(t_flags));
	format_after_parse = parse_conversion(format, args, &flags);
	*out += apply_conversion(args, out);
	//format_after_parse = parse_type(format, args, &flags);
	//	TODO Apply spec
//	printf("PARSE RESULT:\n");
//	printf("width:	%d\n", flags.width.value);
//	printf("prec:	%d (%s)\n",
//		   flags.precision.value,
//		   BOOL(flags.precision.is_specified));
//	printf("zero:	%s\n", BOOL(flags.zero));
//	printf("minus:	%s\n", BOOL(flags.minus));
	return format_after_parse;
}

static void	resolve_format(const char *format, va_list *args, int *out)
{
	register int	simple_output;

	while (*format)
	{
		simple_output = 0;
		while (format[simple_output] && format[simple_output] != '%')
			simple_output++;
		if (simple_output != 0) //conclusion
		{
			write(1, format, simple_output);
			*out += simple_output;
			format += simple_output;
		}
		if (format[simple_output] == '%') {
			format = resolve_conversion(format + 1, args, out);
		}
	}
}

int			ft_printf(const char *format, ...)
{
	va_list		args;
	int 		out;

	if (!format)
		return (0);
	out = 0;
	va_start(args, format);
	resolve_format(format, &args, &out);
	va_end(args);
	return (out);
}
