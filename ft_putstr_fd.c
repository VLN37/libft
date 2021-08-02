#include "libft.h"

//Writes string S in the provided file descriptor
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
