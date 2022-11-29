/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:23:13 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/15 20:45:00 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_nlist	*ft_lstnew(int num)
{
	t_nlist	*node;

	node = (t_nlist *)malloc(sizeof(t_nlist));
	if (!node)
		return (0);
	(*node).num = num;
	(*node).next = 0;
	return (node);
}
