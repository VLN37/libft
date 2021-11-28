/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftex_tr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 08:14:33 by jofelipe          #+#    #+#             */
/*   Updated: 2021/11/28 08:10:31 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_del(char c, char *del)
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

static char	find_new(char *new, int index)
{
	int	len;

	len = ft_strlen(new);
	if (index > len - 1)
		return (new[len - 1]);
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
	int		i;

	if (!str || !del || !new)
		return ;
	i = -1;
	while (str[++i])
	{
		index = is_in_del(str[i], del);
		if (index == -1)
			continue ;
		str[i] = find_new(new, index);
	}
}
