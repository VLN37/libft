#include "libft.h"

//Inputs the character C in the provided file descriptor, FD
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
