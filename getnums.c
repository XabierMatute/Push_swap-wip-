/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnums.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:21:09 by xmatute-          #+#    #+#             */
/*   Updated: 2022/10/28 21:09:05 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}

int	ft_isalldigit(char *s)
{
	while (*s)
	{
		if (!ft_isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

int	isint(char	*s)
{
	if (*s == '-' || *s == '+')
		s++;
	if (!ft_isalldigit(s))
		return (0);
	if (ft_strlen(s) < ft_strlen("2147483647"))
		return (1);
	if (ft_strncmp(s, "2147483647", 11) < 0)
		return (0);
	return (1);
}

t_nlist	**getnums(char *s, t_nlist **a)
{
	char			**ss;
	unsigned int	i;

	i = 0;
	ss = t_ssplit(s);
	while (ss[i])
	{
		if (!isint(ss[i]) || !ft_nlstadd_front(a, ft_lstnew(atoi(ss[i]))))
			return (endgn(&ss, a));
		i++;
	}
	ft_free2d(&ss);
	return (a);
}
