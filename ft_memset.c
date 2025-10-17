/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:16:57 by nschilli          #+#    #+#             */
/*   Updated: 2025/10/10 09:15:26 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *memset(void *src, int c, size_t n)
{
	char	*t;
	size_t	i;

	t = (char *)src;
	i = 0;
	while (i < n || t[i])
	{
		t[i] = c;
		i++;
	}
	return (src);
}