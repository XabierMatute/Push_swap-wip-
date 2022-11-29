/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inorder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:36:26 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/24 15:02:34 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	inorder(t_nlist	*a)
{
	if (a)
		while (a->next)
		{
			if (!(a->num < a->next->num))
			{
				//printf("\n\n%i > %i\n\n", a->num , a->next->num);
				return (0);
			}
			a = a->next;
		}
	else
		return (-1);
	//printf("ya esta?\n");
	return (1);
}

int	inorderb(t_nlist	*a)
{
	if (a)
		while (a->next)
		{
			if (!(a->num > a->next->num))
			{
				//printf("\n\n%i > %i\n\n", a->num , a->next->num);
				return (0);
			}
			a = a->next;
		}
	else
		return (-1);
	//printf("ya esta?\n");
	return (1);
}