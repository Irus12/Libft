size_t ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*out;
    size_t	i;
    size_t	len;

    len = ft_strlen(s1) + ft_strlen(s2) + 1; //pour le \0
    out = malloc(len * sizeof(char));
    i = 0;
    j = 0;
    while(s1[j])
    {
        out[i] = s1[j];
        j++;
        i++;
    }
    j = 0;
    while(s2[j])
    {
        out[i] = s2[j];
        j++;
        i++;
    }
    out[i] = 0;
    return (out);
}
