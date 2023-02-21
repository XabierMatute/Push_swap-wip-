/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:48:47 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/13 16:16:20 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	push(t_nlist	**from, t_nlist	**to)
// {
// 	t_nlist *n1;
// 	t_nlist *n2;
// 	t_nlist *na;
	
// 	n1 = *from;
// 	if (n1)
// 	{
// 		n2 = n1->next;
// 		na = *to;
// 		if (na)
// 			n1->next =na->next;
// 		else
// 			n1->next = NULL;
// 		*from = n2;
// 		*to = n1;
// 	}
// }

void	push(t_nlist	**from, t_nlist	**to)
{
	t_nlist *n2;

	if (*from)
	{
		n2 = (*from)->next;
		ft_nlstadd_front(to, *from);
		*from = n2;
	}
}

void	pa(t_nlist	**a, t_nlist	**b)
{
	if (*b)
	{
		write(1, "pa\n", 3);
		push(b, a);
	}
}

void	pb(t_nlist	**a, t_nlist	**b)
{
	if (*a)
	{
		write(1, "pb\n", 3);
		push(a, b);
	}
}