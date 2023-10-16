/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:13:24 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/16 20:31:26 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Overwrites the first LEN bytes of PTR with the character C
void	*ft_memset(void *str, int c, size_t n)
{
	char	vec[8];
	int		qty;
	int		i;

	qty = n;
	i = 0;
	if (n > 100)
	{
		while (i++ < 8)
			vec[i] = c;
		while (qty >= 8)
		{
			*(uint64_t *)str = *(uint64_t *)vec;
			qty -= 8;
			str += 8;
		}
	}
	while (qty--)
		*(char *)str++ = c;
	return (str - n);
}
