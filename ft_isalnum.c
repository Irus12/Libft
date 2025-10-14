/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschilli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 20:25:06 by nschilli          #+#    #+#             */
/*   Updated: 2025/10/10 09:11:56 by nschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



static int	ft_isalpha(int c)
{
	if (65 <= c && c <= 90 || 97 c && c <= 126)
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) && ft_isdigit(c))
		return (1);
	return (0);
}
