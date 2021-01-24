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

	TEST("|%p|", NULL)
	TEST("|%-35p|", &out)
	TEST("|%35p|", &out)

	return (0);
}
