#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char dest[50] = "lorem";
	char src[] = "lorem ipsum dolor";
	printf("%s\n", dest);
	printf("%d\n", ft_strlcpy(dest, src, -1));
	printf("%s\n", dest);
}
