/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 23:26:46 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/31 23:34:41 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list **tmp;
	t_list *prev;

	if (!lst || !del)
		return ;
	tmp = lst;
	prev = *lst;
	while ((*tmp)-> next)
	{
		prev = (*tmp);
		(*tmp) = (*tmp)->next;
		del(prev->content);
		free(prev);
	}
	del((*tmp)->next);
	free((*tmp));
	lst = NULL;
}
