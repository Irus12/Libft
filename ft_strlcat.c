static size_t strnlen(char *c, size_t max)
{
	size_t	i,

	i = 0;
	while (c[i])
	{
		if (i >= max)
			return (max);
		i++;
	}
	return (i);
}

//size taille du buffer, pas du string dans le buffer
size_t ft_strlcat(char *dst, const char *str, size_t size) //size includes \0
{
	size_t	dlen;
	size_t	i;

	dlen = strnlen(dst, size);
	i = 0;
	if(dlen < size) //check on donne une bonne size, fait passer si size = dlen + 1
	{
		while (str[i] && i < (size - dlen) - 1) //check si y'a de la place, fait pas passer si size = dlen + 1
		{
			dst[dlen + i] = (char *) src[i];
			i++;
		}
	}
	return (dlen + strnlen((char *) str, -1));
}
