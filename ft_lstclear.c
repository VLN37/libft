/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 23:26:46 by jofelipe          #+#    #+#             */
/*   Updated: 2021/08/01 00:46:11 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curr;
	t_list *prev;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr->next)
	{
		prev = curr;
		if (prev->content)
			del(prev->content);
		free(prev);
		curr = curr->next;
	}
	if (curr->content)
		del(curr->content);
	free(curr);
	*lst = NULL;
}
