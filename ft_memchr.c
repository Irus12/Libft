#include "libft.h"
void	*memchr(const void *s, int c, size_t n)
{
	char	*mem;
	size_t	i;

	mem = (char *) s;
	i = 0;
	while (i < n)
	{
		if (mem[i] == c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return NULL;
}
