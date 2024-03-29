/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:19:35 by xmatute-          #+#    #+#             */
/*   Updated: 2023/01/23 21:09:28 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_nlstadd_front(t_nlist **lst, t_nlist *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_nlist **lst, t_nlist *new)
{
	if (!*lst)
		*lst = new;
	else if (!((*lst)->next))
		(*lst)->next = new;
	else
		ft_lstadd_back(&(*lst)->next, new);
}