/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:18 by jofelipe          #+#    #+#             */
/*   Updated: 2021/07/27 10:20:51 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the difference of the first character that differ between
//s1 and s2
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
			return (s1[i] - s2[i]);
		else if (s1[i] != '\0' && s2[i] == '\0')
			return (1);
		else
			return (0);
	}
	return (0);
}
