#include <stddef.h>
#include <stdlib.h>
#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	size_t	length;

	length = nmemb * size;
	out = (void *)malloc(length);
	if(!out)
		return NULL;
	ft_bzero(out, length);
	return (out);
}