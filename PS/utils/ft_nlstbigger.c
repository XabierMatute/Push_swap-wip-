/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstbigger.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:26:32 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/24 11:58:29 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_nlstbigger(t_nlist	*l, int n)
{
	size_t	i;

	i = 0;
	while (l)
	{
		if (l->num > n)
			i++;
		l = l->next;
	}
	return (i);
}

size_t	ft_nlstsmaller(t_nlist	*l, int n)
{
	size_t	i;

	i = 0;
	while (l)
	{
		if (l->num < n)
			i++;
		l = l->next;
	}
	return (i);
}

size_t	ft_nlstbiggersize(t_nlist	*l, int n, size_t size)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	while (l && s <= size)
	{
		if (l->num > n)
			i++;
		l = l->next;
		s++;
	}
	return (i);
}

size_t	ft_nlstsmallersize(t_nlist	*l, int n, size_t size)
{
	size_t	i;
	size_t	s;

	s = 0;
	i = 0;
	while (l && s <= size)
	{
		if (l->num < n)
			i++;
		s++;
		l = l->next;
	}
	return (i);
}

