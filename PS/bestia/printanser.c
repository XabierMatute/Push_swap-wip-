/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printanser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:54:38 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/24 16:17:13 by xmatute-         ###   ########.fr       */
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
		write(1, "rra", 3);
	if (m == RRB)
		write(1, "rrb", 3);
	if (m == RRR)
		write(1, "rrr", 3);
	write(1, "\n", 1);

}

void	printanser(char *s)
{
	int i;

	i = 0;
	printf("\n");

	while (s[i])
	{
		printmove(s[i]);
		i++;
	}
	printf("\n");
	//free s
}