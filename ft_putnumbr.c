/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:42:52 by xmatute-          #+#    #+#             */
/*   Updated: 2022/10/28 16:01:15 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_putposnbr(unsigned int n)
{
	if (n / 10 == 0)
		ft_putchar('0' + n);
	else
	{
		ft_putposnbr(n / 10);
		ft_putposnbr(n % 10);
	}
}

void	ft_putnbr(int n)
{
	if (n == 0)
		ft_putchar('0');
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putposnbr(-1 * n);
	}
	else
		ft_putposnbr(n);
}
