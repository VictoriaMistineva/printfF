
#include "ft_printf.h"

void ft_width(const char *format, t_f *f, va_list *ap) //ширина
{
	if (*format == '*')
	{
		f->star = 1;
		format ++;
		f->star = va_arg(*ap, int);
	}
		if (f->width < 0)
		{
			f->minus = 1;
			f->width = -f->width;
			f->zero = 0;
		}
		//входим в цикл для чисел
//	while(ft_isdigit(*format))// 1...9
//	{
//		f->star = 1;
//		f->star = f->star * 10 + format - '0';
//		format ++;
		//входим в цикл для чисел
		ft_struct(f);
}
void	ft_digit(const char *format, t_f *f, va_list *ap) //точность
{
	if (*format != '.')
		//type
			else
	{
		format++;
		f->star = 1;
	}
	if (*format == '*')
	{
		format ++;
		f->star = 1;
		f->star = va_arg(*ap, int );
		//type
	}
	while(ft_isdigit(*format))// 1...9
	{
		f->star = 1;
		f->star = f->star * 10 + format - '0';
		format ++;
	}
}









//void	ft_flags(const char *format, t_f *f, va_list *ap)
//{
//	while (*format && (format == '0' || format == '-'))
//	{
//		format++;
//		if (format == '0')
//		{
//			f->zero = 1;
//			f->minus = 0;
//		}
//		else if (format == '-')
//			f->zero = 0;
//		f->minus = 1;
//	}
//}



