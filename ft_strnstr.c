char *strnstr(const char *haystack, const char *needle, size_t len)
{
    char	*hay;
	char	*ndl;
	size_t	i;
	size_t	j;

	hay = (char *)haystack;
	ndl = (char *)needle;
	i = 0;
	j = 0;

	if (!*needle)
		return NULL;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == ndl[j])
		{
			j++;
		}
		if (ndl[j] == 0)
		{
			return (hay+i);
		}
		i++;
	}
}