#include "ft_printf.h"


int		apply_conversion(va_list *args, t_flags *flags)
{
	if (flags->conv == 'd' || flags->conv == 'i')
		return (print_di(va_arg(*args, int), flags));
	else if (flags->conv == 'u')
		return (print_u(va_arg(*args, unsigned), flags));
	else if (flags->conv == 'c')
		return(print_c((char)va_arg(*args, int), flags));
	else if (flags->conv == 's')
		return(print_s(va_arg(*args, char *), flags));
	else if (flags->conv == 'p')
		return (print_p(va_arg(*args, unsigned long), flags));
	else if (flags->conv == 'x' || flags->conv == 'X')
		return (print_xX(va_arg(*args, unsigned long), flags));
	else
		return (0);
}
