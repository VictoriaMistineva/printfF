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

	TEST("|%s|", "Hello")
	TEST("|%.3s|", "Hello")
	TEST("|%5.3s|", "Hello")
	TEST("|%-5.3s|", "Hello")
	TEST("|%05.3s|", "Hello")

	return (0);
}
