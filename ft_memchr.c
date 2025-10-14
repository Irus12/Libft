#include <stddef.hstddef.h>
void *memchr(const void *s, int c, size_t n)
{
	char	*mem;
	char	comp;
	size_t	i;

	mem = (char *) s;
	comp = (char *) c;
	i = 0;
	while (i < n)
	{
		if (mem[i] == comp[i])
		{
			return ((void *) mem[i]); //ou bien return s;
		}
		i++;
	}
	return NULL;
}
