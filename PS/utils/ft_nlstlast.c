/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:25:16 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/17 13:57:49 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_nlist	*ft_nlstlast(t_nlist *lst)
{
	while (lst)
	{
		if (!(lst->next))
			return (lst);
		else
			lst = lst->next;
	}
	return (lst);
}

t_nlist	*ft_nlstpenlast(t_nlist *lst)
{
	while (lst)
	{
		if ((lst->next))
			if (!(lst->next->next))
				return (lst);
		lst = lst->next;
	}
	return (lst);
}