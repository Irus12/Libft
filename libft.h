#ifdef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>

//check les returns, si fini, normes et include
//CHECK LES NOMS DE VARIABLES DANS PARAMETRES
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char c);
void	*ft_memset(void *b, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n)size_t
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t	ft_strlcat(char *dst, const char *str, size_t size)
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n) //todo
char *ft_strnstr(const char *haystack, const char *needle, size_t len) //todo
int ft_atoi(const char *nptr) 