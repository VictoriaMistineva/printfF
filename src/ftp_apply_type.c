#include "ft_printf.h"

int		apply_conversion(va_list *args, t_flags *flags)
{
	if (flags->conv == 'd' || flags->conv == 'i')
		//	TODO di
		return (0);
	else if (flags->conv == 'u')
		//	TODO u
		return (0);
	else if (flags->conv == 'c')
		//	TODO c
		return (0);
	else if (flags->conv == 's')
		//	TODO c
		return (0);
	else if (flags->conv == 'p')
		//	TODO p
		return (0);
	else if (flags->conv == 'p')
		//	TODO p
		return (0);
	else if (flags->conv == 'x' || flags->conv == 'X')
		//	TODO p
		return (0);
}
