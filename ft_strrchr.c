#include <stdio.h>
#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	int	i;
	char	*last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == (char) c) //fera de la merde
			last = (char *)&s[i]; //chelou, s+i fonctionne ?
		i++;
	}
	if (s[i] == c) //si le dernier char est celui qui corresond
		last = (char *)&s[i];
	return (last);
}
/*
int main(void)
{
    const char *str = "salut wesh les gens wesh";
    int c = 0;
    char *res = ft_strrchr(str, c);

    if (res)
        printf("Dernière occurrence de '%c' trouvée à l'indice %ld : \"%s\"\n", c, res - str, res);
    else
        printf("Caractère '%c' non trouvé.\n", c);

    return 0;
}
*/
