#include "ft_printf.h"
static void	ft_struct(t_f *f)
{
	f->minus = 0;
	f->zero = 0;
	f->width = 0;
	f->precision = -1;
	f->width = 0; //ширина
	f->star = 0;
}
static void ft_parser(char **format, t_f *f, va_list *ap)
{
	//ft_struct(f);
	while (*format)
	{
		if (format == '0')
		{
			f->zero = 1;
			f->minus = 0;
			format++;
		}
		else if (format == '-')
			f->zero = 0;
			f->minus = 1;
			format++;
	}
	ft_width(&format, f,&ap);
}

int ft_printf(const char *format, ...)
{
	int len;
	t_f	*f;
	len = 0;
	va_list ap;
	va_start(ap, format);
	if (!(f = (t_f *)malloc(sizeof(t_f))))
		return (-1);
	if (!f || !format)
		return (-1);

	//va_arg(ap, int);// вытаскискивать
	while (*format)
	{
		if(*format != '%')
		{
			//len += write(1, *format, 1);
			len += ft_putchar(*format)
			format++;
		}
		else
			ft_parser(&format, f, &ap);
	}
	va_end(ap);
	return(len);
}
