#include "ft_printf.h"

static char *get_xX(unsigned long arg, t_flags *flags)
{
	return (NULL);
}

static char *get_p(void *arg, t_flags *flags)
{
	return (NULL);
}

static char *get_s(char *arg, t_flags *flags)
{
	return (NULL);
}

static char *get_u(unsigned arg, t_flags *flags)
{
	return (NULL);
}

int		apply_conversion(va_list *args, t_flags *flags)
{
	if (flags->conv == 'd' || flags->conv == 'i')
		return (print_di(va_arg(*args, int), flags));
	else if (flags->conv == 'u')
		get_u(va_arg(*args, unsigned), flags);
	else if (flags->conv == 'c')
		return(print_c((char)va_arg(*args, int), flags)); // если попадают
//		любые чары то выводим символ ,но это невалидный случай |?????|
	else if (flags->conv == 's')
		get_s(va_arg(*args, char *), flags);
	else if (flags->conv == 'p')
		get_p(va_arg(*args, void *), flags);
	else if (flags->conv == 'x' || flags->conv == 'X')
		get_xX(va_arg(*args, unsigned long), flags);
	else
		return (0);
}
