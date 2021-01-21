#include "ft_printf.h"

#define TEST(arg, flags, pattern)\
	write(1, "|", 1);\
	print_di(arg, &flags);\
	write(1, "|\n", 2);\
	printf(pattern, arg);\
	printf("\n");\

int main(void)
{
	t_flags		flags;

	bzero(&flags, sizeof(t_flags));
	TEST(0, flags, "|%d|")

	bzero(&flags, sizeof(t_flags));
	TEST(1, flags, "|%d|")

	bzero(&flags, sizeof(t_flags));
	TEST(42, flags, "|%d|")

	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	TEST(42, flags, "|%.3d|")

	bzero(&flags, sizeof(t_flags));
	TEST(-42, flags, "|%d|")

	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	TEST(-42, flags, "|%.3d|")

	bzero(&flags, sizeof(t_flags));
	flags.width.value = 3;
	flags.width.is_specified = 1;
	TEST(0, flags, "|%3d|")

	bzero(&flags, sizeof(t_flags));
	flags.width.value = 3;
	flags.width.is_specified = 1;
	TEST(1, flags, "|%3d|")

	bzero(&flags, sizeof(t_flags));
	flags.width.value = 3;
	flags.width.is_specified = 1;
	TEST(42, flags, "|%3d|")

	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	flags.width.value = 4;
	flags.width.is_specified = 1;
	TEST(42, flags, "|%4.3d|")

	bzero(&flags, sizeof(t_flags));
	flags.width.value = 4;
	flags.width.is_specified = 1;
	TEST(-42, flags, "|%4d|")

	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	flags.width.value = 5;
	flags.width.is_specified = 1;
	TEST(-42, flags, "|%5.3d|")

	bzero(&flags, sizeof(t_flags));
	flags.width.value = 3;
	flags.width.is_specified = 1;
	flags.minus = 1;
	TEST(0, flags, "|%-3d|")

	bzero(&flags, sizeof(t_flags));
	flags.width.value = 3;
	flags.width.is_specified = 1;
	flags.minus = 1;
	TEST(1, flags, "|%-3d|")

	bzero(&flags, sizeof(t_flags));
	flags.width.value = 3;
	flags.width.is_specified = 1;
	flags.minus = 1;
	TEST(42, flags, "|%-3d|")

	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	flags.width.value = 4;
	flags.width.is_specified = 1;
	flags.minus = 1;
	TEST(42, flags, "|%-4.3d|")

	bzero(&flags, sizeof(t_flags));
	flags.width.value = 4;
	flags.width.is_specified = 1;
	flags.minus = 1;
	TEST(-42, flags, "|%-4d|")

	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	flags.width.value = 5;
	flags.width.is_specified = 1;
	flags.minus = 1;
	TEST(-42, flags, "|%-5.3d|")
	return (0);
}