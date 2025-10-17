#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;
	size_t  j;
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
