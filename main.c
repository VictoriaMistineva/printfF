#include "ft_printf.h"

#define TEST(PATTERN, ...)\
	out = ft_printf(PATTERN, __VA_ARGS__);\
    printf(" %d\n", out);\
	out = printf(PATTERN, __VA_ARGS__);       \
    printf(" %d\n", out);\
	printf("---------\n");
int main()
{
	int		out;

	TEST("|%-5.3d|", -42)
	TEST("|%-*.*d|", 5, 3, -42)
	return (0);
}
