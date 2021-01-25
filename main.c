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

//	TEST("|%-5%|")
//	TEST("|%-|")
	ft_printf("MY = |%-05%|\n");
	printf("|%-05%|\n\n");

	return (0);
}