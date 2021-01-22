#include "ft_printf.h"

static void	put_conversion(int arg, char *number, int num_len, t_flags *flags)
{
	int 	precision_additional; //обрабатываем кейс условиями поведения

	if (arg < 0)
		write(1, "-", 1);
	if (flags->precision.is_specified)
	{
		precision_additional = flags->precision.value - num_len;
		while (precision_additional-- > 0)
			write(1, "0", 1);
	}
	if (!(flags->precision.is_specified && flags->precision.value == 0))
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
	return (result + (arg < 0));
}

int			print_di(int arg, t_flags *flags)
{
	char 	*number;
	int		num_len;
	int		conv_len;

	number = ft_ultoa_base( // для иницилизация дя перевода в разные системы
			// счисления X-1 x-0
			(arg < 0) ? -arg : arg,
			10, 0, &num_len);
	conv_len = get_conversion_len(arg, num_len, flags);//длина
	if (flags->minus)
	{
		put_conversion(arg, number, num_len, flags);
		conv_len += put_width(conv_len, flags); //длина c пробелами
	}
	else{
		conv_len += put_width(conv_len, flags); //длина забитая пробелами
		put_conversion(arg, number, num_len, flags); //определение чего
	}
	return (conv_len);
}
