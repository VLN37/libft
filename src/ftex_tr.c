/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftex_tr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 08:14:33 by jofelipe          #+#    #+#             */
/*   Updated: 2021/11/27 09:13:46 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_del(char c, char *del)
{
	int	i;

	i = -1;
	while (del[++i])
	{
		if (c == del[i])
			return (i);
	}
	return (-1);
}

char	find_new(char c, char *new, int index)
{
	if ((size_t)index > ft_strlen(new) - 1)
		return (c);
	else
		return (new[index]);
}

/**
 * @brief swaps any ocurrence of del in str with replace in order
 *
 * @param str
 * @param del
 * @param replace
 */
void	ftex_tr(char *str, char *del, char *new)
{
	int		index;
	char	*tmp;

	if (!str || !del | !new)
		return ;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (*str)
	{
		index = is_in_del(*str, del);
		if (index == -1)
			str++;
		else
		{
			*str = find_new(*str, new, index);
			str++;
		}
	}
}
