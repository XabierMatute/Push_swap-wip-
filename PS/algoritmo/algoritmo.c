/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:00:21 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/28 16:48:32 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_nlist	*getpivote(t_nlist **lst,  size_t size)
{
	size_t	i;
	t_nlist *node;

	// printf("pivote size = %zu\n", size);
	// printnlst(*lst);

	if (!*lst)
		return (NULL);
	
	i = 0;
	node = *lst;
	
	while (node && i <= size)
	{
			// printf("%i smaller than %zu == %zu / 2? %i\n", node->num, ft_nlstbiggersize(*lst, node->num, size), size, ft_nlstbiggersize(*lst, node->num, size) == size / 2);

		if (ft_nlstbiggersize(*lst, node->num, size) == size / 2)
		{
			// printf("holi\n");

			return(node);
		}
		node = node->next;
		i++;
	}
	printf("ey babygirl\n");
	return (0);
}

void	qs(t_nlist	**a, t_nlist	**b, size_t size, t_nlist	*pivote);

void	qsb(t_nlist	**a, t_nlist	**b, size_t size, t_nlist	*pivote)
{
	size_t	i;
	size_t	p;
	size_t	r;

	i = 0;
	p = 0;
	r = 0;
	swap_in(a, b);
	if (size < 3 || !pivote)
		return;

	while (*b && p + r < size && ft_nlstbiggersize(*a, pivote->num, size - p))
	{
		if ((*b)->num >= pivote->num)
		{
			pa(a, b);
			p++;
		}
		else
		{
			rb(b);
			r++;
		}
	}
	if	(r != ft_nlstsize(*b))
		while (r--)
			rrb(b);
	qs(a, b, p, getpivote(a, p));
	qsb(a, b, size - p, getpivote(b, size - p));
	while (p--)
	{
		pb(a, b);
	}
}

void	qs(t_nlist	**a, t_nlist	**b, size_t size, t_nlist	*pivote)
{
	size_t	p;
	size_t	r;

	p = 0;
	r = 0;
	swap_in(a, b);
	if (size < 3|| !pivote)
		return;



	while (*a && p + r < size && ft_nlstbiggersize(*a, pivote->num, size - p))
	{
		if ((*a)->num <= pivote->num)
		{
			pb(a, b);
			p++;
		}
		else
		{
			ra(a);
			r++;
		}
	}
	if	(r != ft_nlstsize(*a))
		while (r--)
			rra(a);
	qs(a, b, size - p, getpivote(a, size - p));
	// qsb(a, b, p, getpivote(b, p));
	while (p--)
	{
		pa(a, b);
	}
	
}

void	algoritmo(t_nlist	**a, t_nlist	**b)
{
	qs(a, b, ft_nlstsize(*a), getpivote(a, ft_nlstsize(*a)));
	// while (*b)
	// {
	// 	moveup(b, biggest(*b));
	// 	pa(a, b);
	// }
		// printaAB(*a, *b);
	ft_end(a, b);
}