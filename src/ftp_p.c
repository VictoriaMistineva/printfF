# include "ft_printf.h"

static int 		put_width_p(int conv_len, t_flags *flags)
{
	int		width_additional;
	int 	result;

	result = 0;
	width_additional = flags->width.value - conv_len;
	while (width_additional-- > 0)
	{
		write(1, " ", 1);
		result++;
	}
	return (result);
}

static int	get_conversion_len(void *arg, int num_len, t_flags *flags)
{
	int 	result;

	result = num_len;
	if (flags->precision.is_specified && flags->precision.value > num_len)
		result = flags->precision.value;
	else if (flags->precision.is_specified && flags->precision.value == 0)
		result = 0;
	return (result);
}

int			print_p(void *arg, t_flags *flags)
{	char 	*number;
	int		num_len;
	int		conv_len;

	number = ft_ultoa_base(arg,16, 0, &num_len);
	conv_len = get_conversion_len(arg, num_len, flags);
	if (flags->minus)
	{
		write(1, number, num_len);
		conv_len += put_width_p(conv_len, flags);
	}
	else
	{
		conv_len += put_width_p(conv_len, flags);
		write(1, number, num_len);
	}
	return (conv_len);
}

