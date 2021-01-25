#include "ft_printf.h"

#define TEST(PATTERN, ...)\
	out = ft_printf(PATTERN, __VA_ARGS__);\
    printf("MY= %d\n", out);\
	out = printf(PATTERN, __VA_ARGS__);       \
    printf(" %d\n", out);\
	printf("---------\n");

int main()
{
	int		out;

	TEST("|%%|");
	TEST("|%5%|");
	TEST("|%-5%|");
	TEST("|%   |");
	TEST("|%   |");

	return (0);
}
