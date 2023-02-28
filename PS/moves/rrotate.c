/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:38:50 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/24 14:58:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrotate(t_nlist	**l)
{
	t_nlist *n1;
	t_nlist *nn;
	t_nlist *nn_;

	n1 = *l;
	nn = ft_nlstlast(n1);
	nn_ = ft_nlstpenlast(n1);
	if (n1 && nn)
	{
		ft_nlstadd_front(l, nn);
		nn_->next = NULL;
	}
}

void	rra(t_nlist	**a)
{
	write(1, "rra\n", 5);
	if (*a)
		if((*a)->next)
			rrotate(a);
}

void	rrb(t_nlist	**b)
{
	write(1, "rrb\n", 5);
	if (*b)
		if((*b)->next)
			rrotate(b);
}

void	rrr(t_nlist	**a, t_nlist	**b)
{
	write(1, "rrr\n", 5);
	if (*a)
		if((*a)->next)
			rrotate(a);
	if (*b)
		if((*b)->next)
			rrotate(b);
}