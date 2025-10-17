#include <stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *out;
    
    out = malloc(nmemb * size);
    if(nmemb == 0 || size == 0)
        return NULL;
    while (out[size])
    {
        out[size] = 0;
        size--;
    }
    return (out);
}