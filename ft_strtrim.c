#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++
	return (i);
}

// true/false
static int	validchar(const char c, const char *tormv)
{
	size_t	i;

	i = 0;
	while (tormv[i])
	{
		if (tormv[i] == c)
			return (0);
	}
	return (1);
}

static int	mallength(char const *s1, char const *set)
{
	int	cnt;
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if(!validchar(s1[i], set))
			cnt++;
		i++;
	}
	return (ft_strlen(s1) - cnt + 1);
}
// je test%   7
// j tst%	 5
char *ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	i;
	size_t	j;
	size_t	rmv;

	i = 0;
	j = 0;
	rmv = 0;
	out = (char *) malloc(mallength(s1, set) * sizeof(char *));
	while (s1[i])
	{
		if(validchar(s1[i], set))
		{
			out[j] = (char *) s1[i];
			j++;
		}
		i++;
	}
	return (out);
}