#include "libft.h"

/**
 * @brief inputs the string S in the provided file descriptor, including a line
 * break at the end
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
