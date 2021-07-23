//returns 1 if the character is in the ASCII table, 0 otherwise
int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
