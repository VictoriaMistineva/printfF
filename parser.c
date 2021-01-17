
#include "ft_printf.h"

void ft_width(**format, t_f *f, va_list *ap); //ширина
{
	if (*format == '*')
	{
		f->star = 1;
		format ++;
		//что то
	}
		if (f->width < 0)
		{
			f->minus = 1;
			f->width = -f->width;
			f->zero = 0;
		}
		//для цыфр digit
		while(ft_isdigit(*format))
		{
			f->star = 1;
		}
}


