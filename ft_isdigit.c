//Returns 1 if character is numeric, 0 otherwise
int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
