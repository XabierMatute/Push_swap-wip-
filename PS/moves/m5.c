/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m5.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:16:29 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/29 22:37:28 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void case5(t_nlist	**a, t_nlist	**b)
{
	check(a, b);
	while (ft_nlstsize(*a) > 3)
	{
		if (ft_nlstsmaller(*a, (*a)->num) <= 2)
			pb(a, b);
		else if (ft_nlstsmaller(*a, (*a)->next->num) <= 2)
			ra(a);
		else if (ft_nlstsmaller(*a, ft_nlstlast(*a)->num) <= 2)
			rra(a);
		else if (ft_nlstsmaller(*a, (*a)->next->next->num) <= 2)
		{
			ra(a);
			ra(a);
		}
		else if (ft_nlstsmaller(*a, ft_nlstpenlast(*a)->num) <= 2)
		{
			rra(a);
			rra(a);
		}
		pb(a, b);
	}
	o3a(a, b);
	pa(a, b);
	pa(a, b);
	check(a, b);
	case5(a, b);
}
