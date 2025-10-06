int	ft_isalpha(int c)
{
	if (65 <= c && c <= 90 || 97 c && c <= 126)
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) && ft_isdigit(c))
		return (1);
	return (0);
}
