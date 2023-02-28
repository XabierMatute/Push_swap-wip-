/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:05:39 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/13 17:12:08 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_nlist *biggest(t_nlist *a)
{
	t_nlist	*s;

	s = a;
	while (a)
	{
		if (a->num > s->num)
			s = a;
		a = a->next;
	}
	return (s);
}