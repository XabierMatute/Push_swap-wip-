/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:19:22 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/22 14:05:27 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa_in(t_nlist	**a)
{
//printf("sa?\n");
	if ((*a)->num > (*a)->next->num)
	{
//printf("%i > %i sa!\n", (*a)->num, (*a)->next->num);
		sa(a);
	}
}

void	sb_in(t_nlist	**b)
{
//printf("sb?\n");
	if ((*b)->num < (*b)->next->num)
		sb(b);
}
void	s1_in(t_nlist	**a, t_nlist	**b)
{
//printf("only one\n");
	if (*a)
		if ((*a)->next)
			sa_in(a);
	if (*b)
		if ((*b)->next)
			sb_in(b);
}

void	ss_in(t_nlist	**a, t_nlist	**b)
{
	if ((*a)->num > (*a)->next->num && (*b)->num < (*b)->next->num)
		ss(a, b);
	else
	{
		sa_in(a);
		sb_in(b);
	}
}

void	swap_in(t_nlist	**a, t_nlist	**b)
{
//printf("is needed?\n");
	if (!*a || !*b)
		s1_in(a, b);
	else if (!(*a)->next || !(*b)->next)
		s1_in(a, b);
	else if (*a && *b)
		if ((*a)->next && (*b)->next)
			ss_in(a, b);
}