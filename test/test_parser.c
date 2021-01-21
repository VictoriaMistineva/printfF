#include "ft_printf.h"

//static void	test(const char *format, t_flags *expected)
//{
//	t_flags	flags;
//
//	bzero(&flags, sizeof(t_flags));
//	parse_conversion(format, NULL, &flags);
//	if (memcmp(&flags, expected, sizeof(t_flags)) != 0)
//		printf("FAIL: \"%%%s\"\n", format);
//}

int		main(void)
{
//	t_flags expected;
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	test("s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 1;
//	expected.width.is_specified = 1;
//	test("1s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 42;
//	expected.width.is_specified = 1;
//	test("42s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 42;
//	expected.width.is_specified = 1;
//	expected.minus = 1;
//	test("-42s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 42;
//	expected.width.is_specified = 1;
//	expected.minus = 1;
//	expected.precision.value = 0;
//	expected.precision.is_specified = 1;
//	test("-42.s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 42;
//	expected.width.is_specified = 1;
//	expected.minus = 1;
//	expected.precision.value = 21;
//	expected.precision.is_specified = 1;
//	test("-42.21s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 42;
//	expected.width.is_specified = 1;
//	expected.minus = 1;
//	expected.precision.value = 21;
//	expected.precision.is_specified = 1;
//	expected.zero = 1;
//	test("0-42.21s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 42;
//	expected.width.is_specified = 1;
//	expected.minus = 1;
//	expected.precision.value = 21;
//	expected.precision.is_specified = 1;
//	expected.zero = 1;
//	test("-042.21s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 42;
//	expected.width.is_specified = 1;
//	expected.precision.value = 21;
//	expected.precision.is_specified = 1;
//	expected.zero = 1;
//	test("042.21s", &expected);
//
//	bzero(&expected, sizeof(t_flags));
//	expected.conv = 's';
//	expected.width.value = 42;
//	expected.width.is_specified = 1;
//	expected.precision.value = 0;
//	expected.precision.is_specified = 1;
//	expected.zero = 1;
//	test("042.s", &expected);
//
//	printf("DONE\n");
	//ft_printf("|%c|\n", 'c');
	printf("|%c|\n", 'c');
}
