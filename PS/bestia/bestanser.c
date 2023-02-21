/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bestanser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:29:22 by xmatute-          #+#    #+#             */
/*   Updated: 2023/01/24 13:58:31 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;
	size_t	i;

	p = malloc(nitems * size);
	if (!p)
		return (0);
	i = 0;
	while (i < nitems * size)
	{
		*((unsigned char *)(p + i)) = (unsigned char)0;
		i++;
	}
	return (p);
}

char	*next(char *s)
{
	if (*s < RRR)
		(*s)++;
	else if (*s == RRR)
	{
		*s = 1;
		next(s + 1);
	}
	// podar(s);
	else
		return (0);
	return (s);
}

char *bestanser(t_nlist	**a, t_nlist	**b)
{
	char *s;

	s = calloc(115000, sizeof(char));
	s[0] = -1;
	if (!s)
		return (0);
		printaAB(*a, *b);

	while (!rightanser(ft_nlstdup(*a), ft_nlstdup(*b), next(s)))
	{
			printanser(s);
		write(1, "\n\n", 2);
	}
	return (s);
}