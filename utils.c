#include "ft_printf.h"



int	ft_putchar(char c)
{
	write(1, &c, 1);
		return(1);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}