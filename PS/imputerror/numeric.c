/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeric.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:59:54 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/15 18:38:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	numeric1(char const s[])
{
	size_t	i;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	while (s[i])
	{
		if (s[i] == '-' || s[i] == '+')
			i++;
		if (!ft_isdigit(s[i]))
			return (0);
		while (ft_isdigit(s[i]))
			i++;
		if (!ft_isspace(s[i]) && s[i])
			return (0);
		while	(ft_isspace(s[i]))
			i++;
	}
	return (1);
}

int	numeric2(int n, char const *s2[])
{
	while (n-- > 1)
	{
		if 	(!numeric1(s2[n]))
			return (0);
	}
	return (1);
}