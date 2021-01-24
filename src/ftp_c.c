#include "ft_printf.h"

static int 		put_width_char(t_flags *flags)
{
	int		width_additional;
	int 	result;
	char	c;

	result = 0;
	width_additional = flags->width.value - 1;
	c = (flags->zero) ? '0' : ' ';
	while (width_additional-- > 0)
	{
		write(1, &c, 1);
		result++;
	}
	return (result);
}

int		print_c(char arg, t_flags *flags)
{
	int		conv_len;

	if (flags->minus == 1)
	{
		write(1, &arg,1);
		conv_len += put_width_char(flags);
	}
	else
	{
		conv_len += put_width_char(flags);
		write(1, &arg,1);
	}
	return (conv_len);
}
