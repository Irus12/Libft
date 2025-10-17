#include "libft.h"
static size_t ft_strnlen(char *c, int max)
{
	int	i;

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

	dlen = ft_strnlen(dst, (int)size);
	i = 0;
	if(dlen < size) //check on donne une bonne size, fait passer si size = dlen + 1
	{
		while (str[i] && i < (size - dlen) - 1) //check si y'a de la place, fait pas passer si size = dlen + 1
		{
			dst[dlen + i] = (char)str[i];
			i++;
		}
	}
	return (dlen + ft_strnlen((char *) str, -1));
}
