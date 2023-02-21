/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moveup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:12:23 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/17 12:47:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int rrotatenum(t_nlist	*a, t_nlist	*n)
{
	unsigned int i;

	while (a)
	{
		if (a->num == n->num)
			i = 0;
		i++;
		a = a->next;
	}
	return (i);
}

int rotatenum(t_nlist	*a, t_nlist	*n)
{
	unsigned int i;

	i = 0;
	while (a)
	{
		if (a->num == n->num)
			return (i);
		i++;
		a = a->next;
	}
	return (i);
}


void moveup(t_nlist	**a, t_nlist	*n)
{
	if (rotatenum(*a, n) < rrotatenum(*a, n))
		while (*a != n)
			rb(a);
	else
		while (*a != n)
			rrb(a);
	
}