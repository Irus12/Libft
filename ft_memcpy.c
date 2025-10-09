/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <nschilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:00:57 by nschilli          #+#    #+#             */
/*   Updated: 2025/10/03 18:00:57 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n)
{
	 char	*d;
	 char	*s;

	d = (char *) dest;
	s = (char *) src;
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}
