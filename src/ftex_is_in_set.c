/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftex_is_in_set.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 02:32:58 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/11 22:13:28 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ftex_is_in_set(char c, char *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
