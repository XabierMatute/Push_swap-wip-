/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:45:01 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/22 19:12:29 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void ft_lsterror(t_nlist	**a, t_nlist	**b)
{
	if (a)
		ft_nlstfree(a);
	if (b)
		ft_nlstfree(b);
	ft_error();
}
