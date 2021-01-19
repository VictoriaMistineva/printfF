#include "includes/ft_printf.h"

int main()
{
	ft_printf("MY=%*.d\n" ,5 , 9, 10);
	//ft_printf("MY=||||||%c\n", '   n');
	printf("OR=%*.d" ,5 , 9, 10);
	//printf("OR=||||||%c", '   n');
	//printf("|%c", 'n');
	return (0);
}
