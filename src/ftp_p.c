# include "ft_printf.h"

static int 		put_widthp(int conv_len, t_flags *flags)
{
	int		width_additional;
	int 	result;
	char	c;

	result = 0;
	width_additional = flags->width.value - (conv_len + 2);
	c = (flags->zero) ? '0' : ' ';
	while (width_additional-- > 0)
	{
		write(1, &c, 1);
		result++;
	}
	return (result + 2);
}
static void	put_conversion(int arg, char *number, int num_len, t_flags *flags)
{
	int 	precision_additional; //обрабатываем кейс условиями поведения


	write(1, "0x", 2);
	if (flags->precision.is_specified)
	{
		precision_additional = flags->precision.value - num_len;
		while (precision_additional-- > 0)
			write(1, "0", 1);
	}
	write(1, number, num_len);
}

static int	get_conversion_len(int arg, int num_len, t_flags *flags)
{
	int 	result;

	result = num_len;
	if (flags->precision.is_specified && flags->precision.value > num_len)
		result = flags->precision.value;
	else if (flags->precision.is_specified && flags->precision.value == 0)
		result = 0;
	return (result);
}

int			print_p(int arg, t_flags *flags)
{
	char 	*number;
	int		num_len;
	int		conv_len;

	number = ft_ultoa_base( arg,
			16, 0, &num_len);
	conv_len = get_conversion_len(arg, num_len, flags);
	if (flags->minus)
	{
		put_conversion(arg, number, num_len, flags);
		conv_len += put_widthp(conv_len, flags);
	}
	else
	{
		conv_len += put_widthp(conv_len, flags);
		put_conversion(arg, number, num_len, flags);
	}
	return (conv_len);
}
