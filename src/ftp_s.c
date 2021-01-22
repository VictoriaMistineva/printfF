# include "ft_printf.h"

static int	get_conversion_len(char *str, t_flags *flags)
{
	int 	result;

	result = ft_strlen(str);
	if (flags->precision.is_specified)
		result = (flags->precision.value < result)
				? flags->precision.value : result;
	return (result);
}

int		print_s(char *arg, t_flags *flags)
{
	int conv_len;
	int result;

	if (!arg)
		arg = "(null)";
	conv_len = get_conversion_len(arg, flags);
	result = conv_len;
	if (flags->minus)
	{
		write(1, arg, conv_len);
		result += put_width(conv_len, flags);
	}
	else
	{
		result += put_width(conv_len, flags);
		write(1, arg, conv_len);
	}
	return (result);
}
