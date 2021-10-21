/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftex_mergestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 07:44:57 by jofelipe          #+#    #+#             */
/*   Updated: 2021/10/21 07:46:47 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ftex_strmerge(char *old, char *append)
{
	char	*new;

	if (!old)
		old = ft_strdup("");
	new = ft_strjoin(old, append);
	free(old);
	return (new);
}
