#include <stddef.hstddef.h>
void *memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	comp;
	size_t	i;

	mem = (unsigned char *) s;
	comp = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (mem[i] == comp[i])
		{
			return ((void *) mem[i]);
		}
		i++;
	}
	return NULL;
}
