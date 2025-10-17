#include "libft.h"
char *strchr(const char *src, int c)
{
	char	*s;
	size_t	i;
	
	s = (char *) src;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return &s[i];
			i++;
		}
	}
	return (0);
}