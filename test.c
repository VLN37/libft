#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	int	i;

		//split
	char **split2;
	char **split3;
	split2 = ft_split("  let's split this for   glory !     ", ' ');
	split3 = ft_split( "1-2-3-4-5-6-7-8--8-8--8-4------4--4", '-');
	i = -1;
	while (split2[++i])
		printf("%s\n", split2[i]);
}
