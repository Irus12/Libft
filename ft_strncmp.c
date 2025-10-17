#include "libft.h"
#include <stddef.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *)s1;
	b = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}
