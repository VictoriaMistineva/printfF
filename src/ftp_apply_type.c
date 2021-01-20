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

static char *get_c(char arg, t_flags *flags)
{
	return (NULL);
}

static char *get_u(unsigned arg, t_flags *flags)
{
	return (NULL);
}

static char *get_di(int arg, t_flags *flags)
{
	return (NULL);
}

int		apply_conversion(va_list *args, t_flags *flags)
{
	char 	*printable;
	int 	len;

	if (flags->conv == 'd' || flags->conv == 'i')
		printable = get_di(va_arg(*args, int), flags);
	else if (flags->conv == 'u')
		printable = get_u(va_arg(*args, unsigned), flags);
	else if (flags->conv == 'c')
		printable = get_c((char)va_arg(*args, int), flags);
	else if (flags->conv == 's')
		printable = get_s(va_arg(*args, char *), flags);
	else if (flags->conv == 'p')
		printable = get_p(va_arg(*args, void *), flags);
	else if (flags->conv == 'x' || flags->conv == 'X')
		printable = get_xX(va_arg(*args, unsigned long), flags);
	else
		return (0);
	len = ft_strlen(printable);
	write(1, printable, len);
	free(printable);
	return (len);
}
