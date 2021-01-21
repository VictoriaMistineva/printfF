#include "ft_printf.h"

static void test_ultoa_base(long value, char *expected, int base, int is_upper_case)
{
	char	*actual;
	size_t 	actual_len;
	size_t	expected_len;

	actual = ft_ultoa_base(value, base, is_upper_case);
	actual_len = strlen(actual);
	expected_len = strlen(expected);
	if (actual_len != expected_len || memcmp(actual, expected, expected_len) != 0)
		printf("FAIL: expected = \"%s\"(%zu); actual = \"%s\"(%zu)\n", expected, expected_len, actual, actual_len);
}

static void	test_parser(const char *format, t_flags *expected)
{
	t_flags	flags;

	bzero(&flags, sizeof(t_flags));
	parse_conversion(format, NULL, &flags);
	if (memcmp(&flags, expected, sizeof(t_flags)) != 0)
		printf("FAIL: \"%%%s\"\n", format);
}

int		main(void)
{
	t_flags expected;

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	test_parser("s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 1;
	expected.width.is_specified = 1;
	test_parser("1s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 42;
	expected.width.is_specified = 1;
	test_parser("42s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 42;
	expected.width.is_specified = 1;
	expected.minus = 1;
	test_parser("-42s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 42;
	expected.width.is_specified = 1;
	expected.minus = 1;
	expected.precision.value = 0;
	expected.precision.is_specified = 1;
	test_parser("-42.s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 42;
	expected.width.is_specified = 1;
	expected.minus = 1;
	expected.precision.value = 21;
	expected.precision.is_specified = 1;
	test_parser("-42.21s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 42;
	expected.width.is_specified = 1;
	expected.minus = 1;
	expected.precision.value = 21;
	expected.precision.is_specified = 1;
	expected.zero = 1;
	test_parser("0-42.21s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 42;
	expected.width.is_specified = 1;
	expected.minus = 1;
	expected.precision.value = 21;
	expected.precision.is_specified = 1;
	expected.zero = 1;
	test_parser("-042.21s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 42;
	expected.width.is_specified = 1;
	expected.precision.value = 21;
	expected.precision.is_specified = 1;
	expected.zero = 1;
	test_parser("042.21s", &expected);

	bzero(&expected, sizeof(t_flags));
	expected.conv = 's';
	expected.width.value = 42;
	expected.width.is_specified = 1;
	expected.precision.value = 0;
	expected.precision.is_specified = 1;
	expected.zero = 1;
	test_parser("042.s", &expected);

	printf("DONE PARSER TEST\n");

	test_ultoa_base(0, "0", 10, 0);
	test_ultoa_base(1, "1", 10, 0);
	test_ultoa_base(42, "42", 10, 0);
	test_ultoa_base(127, "127", 10, 0);
	test_ultoa_base(1300, "1300", 10, 0);
	test_ultoa_base(13001, "13001", 10, 0);
	test_ultoa_base(999999, "999999", 10, 0);
	test_ultoa_base(2147483647, "2147483647", 10, 0);

	test_ultoa_base(0x0, "0", 16, 0);
	test_ultoa_base(0x1, "1", 16, 0);
	test_ultoa_base(0xF2, "f2", 16, 0);
	test_ultoa_base(0xACB, "acb", 16, 0);
	test_ultoa_base(0xFFFA, "fffa", 16, 0);
	test_ultoa_base(0xABCDEF, "abcdef", 16, 0);
	test_ultoa_base(0x1A2C3D, "1a2c3d", 16, 0);
	test_ultoa_base(0xFFFFFFFF, "ffffffff", 16, 0);

	test_ultoa_base(0x0, "0", 16, 1);
	test_ultoa_base(0x1, "1", 16, 1);
	test_ultoa_base(0xF2, "F2", 16, 1);
	test_ultoa_base(0xACB, "ACB", 16, 1);
	test_ultoa_base(0xFFFA, "FFFA", 16, 1);
	test_ultoa_base(0xABCDEF, "ABCDEF", 16, 1);
	test_ultoa_base(0x1A2C3D, "1A2C3D", 16, 1);
	test_ultoa_base(0xFFFFFFFF, "FFFFFFFF", 16, 1);

	printf("DONE ULTOA TEST\n");
}
