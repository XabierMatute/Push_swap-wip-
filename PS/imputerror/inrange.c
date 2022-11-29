/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inrange.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:39:51 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/15 18:17:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	inrange(char const s[])
{
	if (!ft_strncmp("-2147483648", s, 12))
		return (1);
	if (*s == '-' || *s == '+')
		s++;
	if (ft_wlen(s) < 10)
		return (1);
	if (ft_wlen(s)> 10)
		return (0);
	if (ft_strncmp("2147483647", s, 10) < 0)
		return (0);
	return (1);
}

int	inrange1(char const s[])
{
	size_t	i;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	while (s[i])
	{
		if (!inrange(&s[i]))
			return (0);
		i += ft_wlen(s + i);
		while (ft_isspace(s[i]))
			i++;
	}
	return (1);
}

int	inrange2(int n, char const *s2[])
{
	while (n-- > 1)
	{
		if 	(!inrange1(s2[n]))
			return (0);
	}
	return (1);
}