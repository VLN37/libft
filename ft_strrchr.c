/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:21:33 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/29 10:24:04 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the address of the last occurrence of C in STR
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
	if (*str == (char)c)
		addrs = (char *)str;
	return (addrs);
}
