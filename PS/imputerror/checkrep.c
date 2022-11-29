/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkrep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:27:27 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/17 10:44:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rep(int n, t_nlist *l)
{
	while (l)
	{
		if (l -> num == n)
			return(1);
		l = l->next;
	}
	return (0);
}

void	checkrep(t_nlist	**a)
{
	t_nlist	*l;

	l = *a;
	while (l)
	{
		if (rep(l -> num, l->next))
			ft_lsterror(a, 0);
		l = l->next;
	}
}
