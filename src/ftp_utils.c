#include "ft_printf.h"

int 		put_width(int conv_len, t_flags *flags)
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
