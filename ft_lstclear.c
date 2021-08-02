/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 23:26:46 by jofelipe          #+#    #+#             */
/*   Updated: 2021/08/02 13:31:03 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//applies the function del to the content of the node that LST points to and
//frees the node. Does the same to every node after it.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*prev;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
		if (prev->content)
			del(prev->content);
		free(prev);
	}
	if (curr->content)
		del(curr->content);
	free(curr);
	*lst = NULL;
}
