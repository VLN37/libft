/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 04:45:18 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/16 10:04:07 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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
