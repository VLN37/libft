/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:09:34 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/27 10:14:45 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the address of the first ocurrence of C in S
void	*ft_memchr (const void *s, int c, size_t n)
{
	void	*tmp;

	tmp = (void *)s;
	while (n > 0)
	{
		if (*(unsigned char *)tmp == (unsigned char)c)
			return (tmp);
		n--;
		tmp++;
	}
	return (NULL);
}
