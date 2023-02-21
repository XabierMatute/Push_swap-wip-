/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:55:30 by xmatute-          #+#    #+#             */
/*   Updated: 2023/01/23 20:54:36 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void check(t_nlist	**a, t_nlist	**b)
{
	//printaAB(*a, *b);
	if (*a)
		if (inorder(*a) && !*b)
			ft_end(a, b);
}

void check3(t_nlist	**a, t_nlist	**b)
{
	if (ft_nlstsize(*a) == 3)
		o3a(a, b);
	if (ft_nlstsize(*b) == 3)
		o3b(a, b);
}
// void	ps(t_nlist	**a, t_nlist	**b)
// {
// 	//printaAB(*a, *b);

// 	check(a, b);
// 	if (!inorder(*a) && (ft_nlstsize(*a) > 3))
// 	{
// 		pb(a, b);
// 	}
	
// 	while (!inorder(*a) && (ft_nlstsize(*a) > 3))
// 	{
// 		pb(a, b);
// 		printaAB(*a, *b);
// 		swap_in(a, b);
// 		printaAB(*a, *b);
// 		check3(a, b);
		
// 	}

// 	while (*b)
// 	{
// 		pa(a, b);
// 		printaAB(*a, *b);
// 		swap_in(a, b);
// 		printaAB(*a, *b);
// 	}
// 	ps(a, b);
	
	
// }

// void	ps(t_nlist	**a, t_nlist	**b)
// {
// 	printaAB(*a, *b);

// 	check(a, b);
// 	if (*a)
// 		if ((*a) > (*a)->next)
// 		sa(a);
// 		printaAB(*a, *b);
// 	pb(a, b);
// 	pb(a, b);
// 	if (*a && *b)
// 		if ((*a) > (*a)->next && (*b) < (*b)->next)
// 			ss(a, b);
// 			printaAB(*a, *b);
// 	if (*a)
// 		if ((*a) > (*a)->next)
// 		sa(a);
// 		printaAB(*a, *b);
// 	if (*b)
// 		if ((*b) < (*b)->next)
// 		sa(b);
// 		printaAB(*a, *b);
// 	if (*a && *b)
// 		if(inorder(*a) && (*a) > *b)
// 		while (*b)
// 			pa(a, b);	
// 			printaAB(*a, *b);
// 	//ps(a, b);	
// 	// if (!*b)
// 	// 	pb(a, b);
// 	// if (!((*b)->next))
// 	// 	pb(a, b);
	
// }

// void	ps(t_nlist	**a, t_nlist	**b)
// {
// 	while(!inorder(*a) || !*b)
// 	{
// 		while (ft_nlstsize(*a))
// 		{
// 			if (*a > (*a)->next)
// 				sa(a);
// 			pb(a, b);
// 			printaAB(*a, *b);
// 		}
// 		while (*b)
// 		{
// 			if (*b > (*b)->next)
// 				sb(b);
// 			pa(a, b);
// 			printaAB(*a, *b);
// 		}
// 		printaAB(*a, *b);
// 	}
// }