#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "libft.h"

#define BHRED "\e[1;91m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define reset "\e[0m"

int	main(void)
{
////////////////////////////////
	//         ft_putendl_fd      //
	////////////////////////////////
	char	*putendl_str;
	char	putendl_str_d[] = { -1, -2, -3, -4, -5, -6, '\0' };
	int		putendl_fd_read;
	int		putendl_fd_write;

	putendl_str = (char *)malloc(sizeof(char) * 30);

	//READ WRITE "They floated in the center"
	memset(putendl_str, 0, 30);
	putendl_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd("They floated in the center", putendl_fd_write);

	putendl_fd_read = open("file.z", O_RDONLY);
	read(putendl_fd_read, putendl_str, strlen("They floated in the center") + 1);

	if (strcmp(putendl_str, "They floated in the center\n") == 0)
		printf(GRN "FT_PUTENDL_FD:   [OK]" reset);
	else
		printf(RED "FT_PUTENDL_FD:   [KO]" reset);
	//READ WRITE "They floated in the center"

	//visual debug
	// printf("\nFD:%s", putendl_str);

	//READ WRITE "He tried to walk past her back into the dark"
	memset(putendl_str, 0, 30);
	putendl_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd("He tried to walk past her back into the dark", putendl_fd_write);

	putendl_fd_read = open("file.z", O_RDONLY);
	read(putendl_fd_read, putendl_str, ft_strlen("He tried to walk past her back into the dark") + 1);

	if (strcmp(putendl_str, "He tried to walk past her back into the dark\n") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE "He tried to walk past her back into the dark"

	//READ WRITE "-1, -2, -3, -4, -5, -6, '\0'"
	memset(putendl_str, 0, 30);
	putendl_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd(putendl_str_d, putendl_fd_write);

	putendl_fd_read = open("file.z", O_RDONLY);
	read(putendl_fd_read, putendl_str, ft_strlen(putendl_str_d) + 1);

	if (putendl_str[5] == -6 && putendl_str[6] == '\n')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);
	//READ WRITE "-1, -2, -3, -4, -5, -6, '\0'"

	//READ WRITE "NULL"
	putendl_fd_write = open("file.z", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd(NULL, putendl_fd_write);

	putendl_fd_read = open("file.z", O_RDONLY);
	read(putendl_fd_read, putendl_str, ft_strlen(putendl_str_d));

	if (putendl_str[5] == -6 && putendl_str[6] == '\n')
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);
	//READ WRITE "NULL"


	free(putendl_str);
	close(putendl_fd_read);
	close(putendl_fd_write);
	return (0);
}
