/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:13:24 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/27 10:15:23 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//overwrites the first N bytes of STR with C
void	*ft_memset(void *str, int c, size_t len)
{
	int	size;

	size = len;
	while (len-- > 0)
	{
		*(char *)str = c;
		str++;
	}
	return (str - size);
}
