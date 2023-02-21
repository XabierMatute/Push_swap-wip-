/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rightanser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:16:12 by xmatute-          #+#    #+#             */
/*   Updated: 2023/01/24 12:34:05 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	applymove(t_nlist	**a, t_nlist	**b, char m)
{
	if (m == SA)
		sa(a);
	if (m == SB)
		sb(b);
	if (m == SS)
		ss(a, b);
	if (m == PA)
		pa(a, b);
	if (m == PB)
		pb(a, b);
	if (m == RA)
		ra(a);
	if (m == RB)
		rb(b);
	if (m == RR)
		rr(a, b);
	if (m == RRA)
		rra(a);
	if (m == RRB)
		rrb(b);
	if (m == RRR)
		rrr(a, b);
}

int	rightanser(t_nlist	*a, t_nlist	*b, char *s)
{
	int r;

	r = 0;
	while (*s)
	{
		applymove(&a, &b, *s);
		s++;
	}
	if (inorder(a) && !b)
	{
		printaAB(a, b);
		r = 1;
	}
	if (a)
		ft_nlstfree(&a);
	if (b)
		ft_nlstfree(&b);
	return (r);
}