#include "libft.h"

char	*ft_ultoa_base(unsigned long number, int base, int is_upper_case)
{
	static char		buf[50];
	register int	len;
	char			c;
	char 			char_offset;

	char_offset = (is_upper_case) ? 55 : 87;
	len = ft_numlen((long)number, base);
	buf[len--] = '\0';
	while (len >= 0)
	{
		c = (char)(number % base);
		buf[len--] = (char)(c + ((c > 9) ? char_offset : '0'));
		number /= base;
	}
	return buf;
}
