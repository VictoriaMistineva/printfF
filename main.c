#include "ft_printf.h"

#define TEST(PATTERN, ...)\
	out = ft_printf(PATTERN, __VA_ARGS__);\
    printf(" %d\n", out);\
	out = printf(PATTERN, __VA_ARGS__);       \
    printf(" %d\n", out);\
	printf("---------\n");

int main()
{
//	int		out;
//
//	TEST("|%-5.3d|", -42)
//	TEST("|%-*.*d|", 5, 3, -42)
	printf("or= 1|%-4c|\n", 'n');
	printf("or= 2|%4c|\n\n", 'n');
	//printf("or= 3|%4y|\n");

	ft_printf("my= 1|%-4c|\n", 'n');
	ft_printf("my= 2|%4c|\n", 'n');
	//ft_printf("my= 3|%4y|\n");
	return (0);
}
