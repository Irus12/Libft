#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;
	size_t	j;

	out = malloc(len * sizeof(char));
	i = start;
	j = 0;
	if (!out)
		return NULL;
	while (s[i] || i < start + len)
	{
		out[j] = (char *) s[i];
	}
	return out;
}

//SALUTç   start 1, len 3, 4
//012345