/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:21:33 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/16 19:45:42 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the address of the last occurrence of C in STR, NULL if none
char	*ft_strrchr(const char *str, int c)
{
	char	*addrs;

	addrs = NULL;
	while (*str)
	{
		if (*str == (char)c)
			addrs = (char *)str;
		str++;
	}
	if (c == 0)
		addrs = (char *)str;
	return (addrs);
}
