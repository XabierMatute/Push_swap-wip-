/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printanser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:54:38 by xmatute-          #+#    #+#             */
/*   Updated: 2023/01/23 22:00:56 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void printmove(char m)
{
	if (m == SA)
		write(1, "sa", 2);
	if (m == SB)
		write(1, "sb", 2);
	if (m == SS)
		write(1, "ss", 2);
	if (m == PA)
		write(1, "pa", 2);
	if (m == PB)
		write(1, "pb", 2);
	if (m == RA)
		write(1, "ra", 2);
	if (m == RB)
		write(1, "rb", 2);
	if (m == RR)
		write(1, "rr", 2);
	if (m == RRA)
		write(1, "rra", 2);
	if (m == RRB)
		write(1, "rrb", 2);
	if (m == RRR)
		write(1, "rrr", 2);
}

void	printanser(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		printmove(s[i]);
	}
	//free s
}