/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:18 by jofelipe          #+#    #+#             */
/*   Updated: 2023/10/17 12:54:31 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_compare(unsigned char c1, unsigned char c2)
{
	return (c1 - c2);
}

//returns the difference of the first character that differ between
//s1 and s2, interpreted as unsigned char
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (s1[++i] && i < n)
		if (s1[i] != s2[i])
			return (char_compare(s1[i], s2[i]));
	if (i < n && s1[i] != s2[i])
		return (char_compare(s1[i], s2[i]));
	return (0);
}
