/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_replace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:31:29 by jofelipe          #+#    #+#             */
/*   Updated: 2021/09/29 01:28:26 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief replaces any ocurrence of old in str with new
 *
 * @param str the old string, it needs to be heap allocated
 * @param old the pattern to be replaced
 * @param new the new pattern
 * @return char* the new freshly allocated string
 */
char	*str_replace(char *str, char *old, char *new)
{
	char	*new_str;
	char	*ptr;
	int		new_size;
	int		i;

	if (!str || !old || !new)
		return (NULL);
	new_str = NULL;
	ptr = ft_strnstr(str, old, ft_strlen(str));
	if (ptr)
	{
		new_size = ft_strlen(str) + ft_strlen(new) - ft_strlen(old) + 1;
		new_str = (char *)malloc(sizeof(char) * new_size);
		if (!new_str)
			return (NULL);
		ft_strlcpy(new_str, str, (ptr - str) + 1);
		ft_strlcat(new_str, new, ft_strlen(new_str) + ft_strlen(new) + 1);
		i = (ptr - str) + ft_strlen(old);
		ft_strlcat(new_str, &str[i], new_size);
		free(str);
	}
	if (new_str)
		return (new_str);
	return (str);
}
