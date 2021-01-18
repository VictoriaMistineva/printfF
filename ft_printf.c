#include "ft_printf.h"
void	ft_struct(t_f *f)
{
	f->minus = 0;
	f->zero = 0;
	f->width = 0;
	f->precision = -1;
	f->width = 0; //ширина
	f->star = 0;
	f->type
}
static void ft_parser(const char *format, t_f *f, va_list *ap)//flags
{
//	ft_struct(f);
	while (*format && (format == '0' || format == '-'))
	{
		format++;
		if (format == '0')
		{
			f->zero = 1;
			f->minus = 0;
		}
		else if (format == '-')
			f->zero = 0;
			f->minus = 1;
	}
	ft_width(format, f,&ap);
}

int ft_printf(const char *format, ...)
{
	int len;
	t_f	*f ;
	va_list ap;
	va_start(ap, format);
	if (!(f = (t_f *)malloc(sizeof(t_f))))
		return (-1);
	if (!f || !format)
		//return (-1);
		return (0);
	len = 0;
	//va_arg(ap, int);// вытаскискивать
	while (*format)
	{
		if(*format != '%')
		{
			len += ft_putchar(*format);

		}
		else
			ft_parser(format, f, &ap);
		format++;
	}
	va_end(ap);
	return(len);
}
