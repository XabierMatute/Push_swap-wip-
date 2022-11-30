/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m5.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:16:29 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/30 10:12:29 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	pushsmaller5(t_nlist	**a, t_nlist	**b, size_t	n)
{
	if (!(ft_nlstsmaller(*a, (*a)->num) < n))
	{
		if (ft_nlstsmaller(*a, (*a)->next->num) < n)
			ra(a);
		else if (ft_nlstsmaller(*a, ft_nlstlast(*a)->num) < n)
			rra(a);
		else if (ft_nlstsmaller(*a, (*a)->next->next->num) < n)
		{
			ra(a);
			ra(a);
		}
		else if (ft_nlstsmaller(*a, ft_nlstpenlast(*a)->num) < n)
		{
			rra(a);
			rra(a);
		}
	}
		pb(a, b);
}

void case5(t_nlist	**a, t_nlist	**b)
{
	check(a, b);
	pushsmaller5(a, b, 2);
	pushsmaller5(a, b, 1);
	o3a(a, b);
	swap_in(a, b);
	pa(a, b);
	pa(a, b);
	check(a, b);
}
