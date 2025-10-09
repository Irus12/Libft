#ifdef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char c);
void	*memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
//memmov
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
strlcat
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*strchr(const char *s, int c);
//strrchr
//strncmp
//memchr
//strnstr
//atoi