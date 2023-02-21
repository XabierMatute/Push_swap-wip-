/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:30:43 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/13 16:17:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_nlist	**l)
{
	t_nlist *n1;
	t_nlist *n2;
	
	n1 = *l;
	if (n1)
	{
		n2 = n1->next;
		if (n2)
		{
			n1->next = n2->next;
			n2->next = n1;
			*l = n2;
		}
	}
}

void	sa(t_nlist	**a)
{
	if (*a)
		if ((*a)->next)
		{
			write(1, "sa\n", 3);
			swap(a);
		}
}

void	sb(t_nlist	**b)
{
	if (*b)
		if ((*b)->next)
		{
			write(1, "sb\n", 3);
			swap(b);
		}
}

void	ss(t_nlist	**a, t_nlist	**b)
{
	if (*a && *b)
		if ((*a)->next && (*b)->next)
		{
			write(1, "ss\n", 3);
			swap(a);
			swap(b);
		}
}