#include "ft_printf.h"
#include "libft.h"
static void	ft_struct(t_f *f)
{
	f->format = 0;
	f->minus = 0;
	f->zero = 0;
	f->neg_number = 0;
	f->width = 0;
	f->precision = 0;
	f->chars_to_print = 0;
	f->width = 0;
}
static void ft_parser(char **format, t_f *f, va_list *ap)
{
	ft_struct(f);

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
	if (!f)
		return (-1);

	//va_arg(ap, int);// вытаскискивать
	while (*format)
	{
		if(*format != '%')
		{
			len += write(1, *format, 1);
			format++;
		}
		else
			ft_parser(&format, f, &ap);
	}
	va_end(ap);
	return(len);
}
