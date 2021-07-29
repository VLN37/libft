#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char** argv)
{
	int fd;

	if (argc != 2)
		return (1);
	fd = open(argv[1], O_WRONLY);
	if (fd == -1)
		return (1);
	ft_putchar_fd('!', fd);
	close(fd);
	return (0);
}
