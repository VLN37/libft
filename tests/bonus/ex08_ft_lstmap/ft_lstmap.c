/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 15:24:44 by jofelipe          #+#    #+#             */
/*   Updated: 2021/08/01 22:13:25 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *begin;
	t_list *newlst;
	t_list *tmp;

	if (!lst || !f || !del)
		return (NULL);
	begin = lst;
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		if (!tmp)
		{
			ft_lstclear(&newlst, f);
			return (NULL);
		}
		ft_lstadd_back(begin, tmp);
	}
	tmp = newlst;
	while (tmp)
	{
		tmp->content = f(tmp->content);
		tmp = tmp->next;
	}
	return (newlst);
}

