#include "ft_printf.h"

int main()
{
	t_flags		flags;

	write(1, "|", 1);
	bzero(&flags, sizeof(t_flags));
	print_di(0, &flags);
	write(1, "|\n", 1);
	printf("|%d|\n", 0);

	write(1, "|", 1);
	bzero(&flags, sizeof(t_flags));
	print_di(42, &flags);
	write(1, "|\n", 1);
	printf("|%d|\n", 1);

	write(1, "|", 1);
	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	print_di(42, &flags);
	printf("\n");

	write(1, "|", 1);
	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	print_di(-42, &flags);
	printf("\n");

	write(1, "|", 1);
	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 3;
	flags.precision.is_specified = 1;
	print_di(0, &flags);
	printf("\n");

	write(1, "|", 1);
	bzero(&flags, sizeof(t_flags));
	flags.precision.value = 0;
	flags.precision.is_specified = 1;
	print_di(0, &flags);
	printf("\n");

	write(1, "|", 1);
	bzero(&flags, sizeof(t_flags));
	flags.width.value = 3;
	flags.precision.value = 0;
	flags.precision.is_specified = 1;
	print_di(0, &flags);
	write(1, "|\n", 2);

	return (0);
}
