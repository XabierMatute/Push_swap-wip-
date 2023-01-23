/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:57:39 by xmatute-          #+#    #+#             */
/*   Updated: 2023/01/23 21:12:49 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	list(int n, t_nlist	**a)
{
	size_t	i;
	t_nlist	*node;

	i = 0;
	node = ft_lstnew(n);
		if (!node)
			ft_lsterror(a, 0);
	ft_lstadd_back(a, node);
}

t_nlist *ft_nlstdup(t_nlist *l)
{
	t_nlist	*d;

	d = 0;
	while (l)
	{
		list(l->num, &d);
		l = l->next;
	}
	return (d);
}
