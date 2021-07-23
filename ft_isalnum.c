int	ft_isalpha(int c);
int	ft_isdigit(int c);

//returns 1 if character is alphanumeric, 0 otherwise
int	ft_isalnum(int c)
{
	if ((!ft_isalpha(c)) && (!ft_isdigit(c)))
		return (0);
	return (1);
}
