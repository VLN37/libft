#include "../../../libft.h"
#include <stdio.h>
#include <stdlib.h>

//runs through the linked list, printing the relevant parameters
void	ft_print_list(t_list *begin)
{
	while (begin)
	{
		printf("%s\n", (char *)begin->content);
		begin = begin->next;
	}
}

int	main(void)
{
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
	t_list	*begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.content = "buddy";
	elem2.content = "how r u";
	elem3.content = "doing?";
	begin = ft_lstnew("hello");
	begin->next = &elem1;
	ft_print_list(begin);
	free(begin);
	return (0);
}
