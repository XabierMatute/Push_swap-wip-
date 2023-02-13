/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:00:21 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/13 16:53:55 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algoritmo(t_nlist	**a, t_nlist	**b)
{
	 printaAB(*a, *b);

	while (*a)
	{
		moveup(a, smallest(*a));
		// printf("up\n");
		// printaAB(*a, *b);
		pb(a, b);
	}
	while (*b)
	{
		pa(a, b);
	}
	//  printaAB(*a, *b);

	ft_end(a, b);
}