/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:39:04 by nschilli          #+#    #+#             */
/*   Updated: 2025/10/09 17:50:36 by nschilli         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//overlap si on donne genre 'tab' et 'tab + 2'
//
void	*memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	size_t	i;
	cdest = (char *) dest;
	csrc = (char *) src;
	i = 0;
	if (dest <= src)
	{
		while (n--)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	if else (dest > src)
	{
		i = n - 1;
		while (n--)
		{
			cdst[i]; = crsc[i];
			i--;
		}
	}
	if(!dest && !src)
		return(0);
	return (dest)
}
