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
//
//	TEST("|%-5.3d|", -42)
//	TEST("|%-*.*d|\n\n", 5, 3, -42)
	printf("or= |%-10.2s|\n", "abcd");
	printf("or= |%-.4s|\n", "abcd");
	printf("or= |%5.4s|\n", "abcd");
	printf("or= |%5.4s|\n", "abcd");
	printf("or= |%9.3s|\n", "abcd");
	printf("or= |%s|\n", "abcd");
	printf("or= |%4s|\n\n", "abcd");

	ft_printf("or= |%-10.2s|\n", "abcd");
	ft_printf("or= |%-.4s|\n", "abcd");
	ft_printf("or= |%5.4s|\n", "abcd");
	ft_printf("or= |%5.4s|\n", "abcd");
	ft_printf("or= |%9.3s|\n", "abcd");
	ft_printf("or= |%s|\n", "abcd");
	ft_printf("or= |%4s|\n\n", "abcd");

	TEST("|%s|", "Hello")
	TEST("|%.3s|", "Hello")
	TEST("|%5.3s|", "Hello")
	TEST("|%-5.3s|", "Hello")
	TEST("|%05.3s|", "Hello")

	return (0);
}
