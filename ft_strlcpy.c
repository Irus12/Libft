size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;	
	while(i <= dsize || src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (dest[i])
	{
		dest[i] = '\0';
	}
	return (i);
}
