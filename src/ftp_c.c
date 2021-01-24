#include "ft_printf.h"

int		print_c(char arg, t_flags *flags)
{
	int		conv_len;
	int 	result;

	conv_len = 1;
	result = conv_len;
	if (flags->minus)
	{
		write(1, &arg, conv_len);
		result += put_width(conv_len, flags);
	}
	else
	{
		result += put_width(conv_len, flags);
		write(1, &arg, conv_len);
	}
	return (result);
}
