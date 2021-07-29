#include "libft.h"
#include <stdio.h>

int	main(void)
{
	if(ft_itoa(0) != "0")
		printf("[KO] itoa fails on 0\n");
	else if (ft_itoa(10) != "10")
		printf("[KO] itoa fails on test 1\n");
	else if (ft_itoa(-10) != "-10")
		printf("[KO] itoa fails on negative\n");
	else if (ft_itoa(2147483647) != "2147483647")
		printf("[KO] itoa fails on INT_MAX\n");
	else if (ft_itoa(2147483647) != "-2147483648")
		printf("[KO] itoa fails on INT_MIN\n");
	else
		printf("[OK] ft_itoa");
}
