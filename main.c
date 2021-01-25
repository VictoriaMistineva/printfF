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
	int		d = 12;

	TEST("|%p|", NULL)
	TEST("|%-35p|", &d)
	TEST("|%0p|", &d)
	TEST("|%-35.100p|", &d)

	return (0);
}
