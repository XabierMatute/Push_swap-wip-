/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:41:50 by xmatute-          #+#    #+#             */
/*   Updated: 2022/10/28 16:03:58 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printlist(t_nlist *list)
{
	while (list)
	{
		ft_putnbr((*list).num);
		ft_putchar('\n');
		list = list -> next;
	}
}
