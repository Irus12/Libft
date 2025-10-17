static size_t	ft_strlen(const char *c)
{
	size_t	i,

	i = 0;
	while (c[i])
		i++
	return (i);
}

char	*ft_strndup(const char *str, size_t n)
{
	size_t	len;
	size_t	i;
	char	*out;

    len = ft_strlen(str);
	i = 0;
	out = malloc(len * sizeof(char))
    while (str[i])
    {
		out[i] = (char *) str[i];
		i++;
    }
	out[i] = 0;
	return (out);
}