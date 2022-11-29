/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:20:44 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/17 13:37:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_nlist	**l)
{
	t_nlist *n1;
	t_nlist *nn;

	n1 = *l;
	nn = ft_nlstlast(n1);
	if (n1 && nn)
	{
		*l = n1->next;
		nn->next = n1;
		n1->next = NULL;
	}
}

void	ra(t_nlist	**a)
{
	write(1, "ra\n", 3);
	rotate(a);
}

void	rb(t_nlist	**b)
{
	write(1, "rb\n", 3);
	rotate(b);
}

void	rr(t_nlist	**a, t_nlist	**b)
{
	write(1, "rr\n", 3);
	rotate(a);
	rotate(b);
}