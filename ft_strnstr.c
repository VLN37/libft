char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		while (str[i] == to_find[j] && i < n)
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
			if (str[i] != to_find[j])
				j = 0;
		}
		i++;
	}
	str = 0;
	return (str);
}
