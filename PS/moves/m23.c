/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m23.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:34:08 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/24 14:48:27 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void case2(t_nlist	**a, t_nlist	**b)
{
	check(a, b);
	sa(a);
}

void case3(t_nlist	**a, t_nlist	**b)
{
	int	n1;
	int	n2;
	int	n3;

	check(a, b);
	n1 = (*a)->num;
	n2 = (*a)->next->num;
	n3 = (*a)->next->next->num;
	if (n3 > n2 && n3 > n1)
		case2(a, b);
	if (n1 > n2 && n1 > n3)
		ra(a);
	else if (n2 > n3 && n2 > n1)
		rra(a);	
	// case3(a, b);
}

void o3a(t_nlist	**a, t_nlist	**b)
{
	int	n1;
	int	n2;
	int	n3;

	if (ft_nlstsize(*a) == 3)
		if (!inorder(*a))
		{
			n1 = (*a)->num;
			n2 = (*a)->next->num;
			n3 = (*a)->next->next->num;
			if (n3 > n2 && n3 > n1)
				swap_in(a, b);;
			if (n1 > n2 && n1 > n3)
				ra(a);
			else if (n2 > n3 && n2 > n1)
				rra(a);
			o3a(a, b);
		}
	if (ft_nlstsize(*a) == 2)
		if (!inorder(*a))
			sa(a);
}

void o3b(t_nlist	**a, t_nlist	**b)
{
	int	n1;
	int	n2;
	int	n3;

	if (!inorderb(*b))
	{
		n1 = (*b)->num;
		n2 = (*b)->next->num;
		n3 = (*b)->next->next->num;
		if (n3 < n2 && n3 < n1)
			swap_in(a, b);;
		if (n1 < n2 && n1 < n3)
			rb(b);
		else if (n2 < n3 && n2 < n1)
			rrb(b);
		o3b(a, b);
	}
}
