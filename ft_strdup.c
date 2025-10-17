#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	size_t	len;
	size_t	i;
	char	*out;

    len = ft_strlen(str);
	i = 0;
	out = malloc(len * sizeof(char));
    while (i < n)
    {
		out[i] = (char)str[i];
		i++;
    }
	out[i] = 0;
	return (out);
}