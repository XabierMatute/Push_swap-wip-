/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:00:21 by xmatute-          #+#    #+#             */
/*   Updated: 2023/02/24 13:30:12 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	algoritmo(t_nlist	**a, t_nlist	**b)
// {
// 	//  printaAB(*a, *b);

// 	while (*a)
// 	{
// 		// pb(a, b);

// 		// swap_in(a, b);
// 		// printf("up\n");
// 		// printaAB(*a, *b);
// 		if (*a)
// 			pb(a, b);
// 		// printaAB(*a, *b);
		
// 	}
// 		printaAB(*a, *b);

	// while (*b)
	// {
	// 	moveup(b, biggest(*b));
	// 	// printaAB(*a, *b);

	// 	pa(a, b);
	// }
	//  printaAB(*a, *b);

// 	ft_end(a, b);
// }


t_nlist	*mediano(t_nlist **lst)
{
	size_t	i;
	t_nlist *node;

	i = 0;
	node = *lst;
	while (node)
	{
		if (ft_nlstbigger(*lst, node->num) == ft_nlstsize(*lst) / 2)
		{
			return(node);
		}
		node = node->next;
		i++;
	}
	return (0);
}

t_nlist	*pivotea(t_nlist **lst,  size_t size)
{
	size_t	i;
	t_nlist *node;

	printf("pivote A size = %zu\n", size);
	// printnlst(*lst);

	if (size <3)
	{
		return(*lst);
	}
	
	i = 0;
	node = *lst;
	
	while (node && i <= size)
	{
		if (ft_nlstsmallersize(*lst, node->num, size) == size / 2)
		{
			// printf("bigger than %i %zu == %zu / 2\n", node->num, ft_nlstbigger(*lst, node->num), size);

			return(node);
		}
		node = node->next;
		i++;
	}
	return (0);
}

t_nlist	*pivoteb(t_nlist **lst,  size_t size)
{
	size_t	i;
	t_nlist *node;

	printf("pivote B size = %zu\n", size);
	// printnlst(*lst);

	if (size < 3)
	{
		return(*lst);
	}
	
	i = 1;
	node = *lst;
	
	while (node && i <= size)
	{
			// printf("%i smaller than %zu == %zu / 2? %i %zu =%zu\n", node->num, ft_nlstbigger(*lst, node->num), size, ft_nlstsmaller(*lst, node->num) == size / 2, ft_nlstsmaller(*lst, node->num), size / 2);

		if (ft_nlstbiggersize(*lst, node->num, size) == size / 2)
		{
			// printf("%i smaller than %zu == %zu / 2\n", node->num, ft_nlstbigger(*lst, node->num), size);

			return(node);
		}
		node = node->next;
		i++;
	}
	printf("ey babygirl\n");
	return (0);
}
// t_nlist	*mediano(t_nlist **lst)
// {
// 	size_t	i;
// 	t_nlist *node;

// 	i = ft_nlstsize(*lst) / 2;
// 	if (ft_nlstsize(*lst) % 2)
// 		i++;
	
// 	node = *lst;
// 	while (node && i--)
// 	{
// 		node = node->next;
// 	}
// 	return (node);
// }

// void	qsb(t_nlist	**b, t_nlist	**a, size_t size)
// {
// 	t_nlist	*pivote;
// 	size_t	i;

// 	i = 0;
// 	if (size < 2)
// 		return;
// 	pivote = mediano(b);
// 	while (*b && i < size)
// 	{
// 		if ((*b)->num <= pivote->num)
// 			pa(a, b);
// 		else
// 			rb(b);
// 		i++;
// 	}

// 	while (i > 0)
// 	{
// 		pb(a, b);
// 		i--;
// 	}
// 	qsb(b, a, ft_nlstsize(*a));
// 	qs(a, b, ft_nlstsize(*b));

// 	while (*b)
// 	{
// 		pa(a, b);
// 	}
// }

// void	qs(t_nlist	**a, t_nlist	**b, size_t size)
// {
// 	t_nlist	*pivote;
// 	size_t	i;

// 	i = 0;
// 	if (size < 2)
// 		return;
// 	pivote = mediano(a);
// 	while (*a && i < size)
// 	{
// 		if ((*a)->num <= pivote->num)
// 			pb(a, b);
// 		else
// 			ra(a);
// 		i++;
// 	}

// 	while (i > 0)
// 	{
// 		pa(a, b);
// 		i--;
// 	}
// 	qsb(b, a, ft_nlstsize(*b));
// 	qs(a, b, ft_nlstsize(*b));//aqui entra enn un bucle infinito
	
// 	while (*b)
// 	{
// 		pa(a, b);
// 	}
	
// }
void	qs(t_nlist	**a, t_nlist	**b, size_t size, t_nlist	*pivote);

void	qsb(t_nlist	**a, t_nlist	**b, size_t size, t_nlist	*pivote)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	if (size < 3)
		return;
		printf("QS B size=%zu pivote = %d\n", size, pivote->num);

		printaAB(*a, *b);
	while (*b && i < size && ft_nlstbigger(*a, pivote->num))
	{
		if ((*b)->num >= pivote->num)
		{
			pa(a, b);
			p++;
		}
		else
			rb(b);
		i++;
	}
	if (size - p == 2)
		swap_in(a, b);
	else if (size - p > 2)
		qsb(a, b, size - p, pivoteb(b , size - p));
	// if (p == 2)
	// 	swap_in(a, b);
	// else if (p > 2)
	// 	qs(a, b, p, pivotea(a , p));

}

void	qs(t_nlist	**a, t_nlist	**b, size_t size, t_nlist	*pivote)
{
	size_t	i;
	size_t	p;
	size_t	r;

	i = 0;
	p = 0;
	if (size < 3)
		return;
	// printf("QS A size=%zu pivote = %d\n", size, pivote->num);
	// printaAB(*a, *b);
	while (*a && i < size && ft_nlstsmaller(*a, pivote->num))
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
		i++;
	}
	while (r--)
	{
		rra(a);
	}
	
	if (size - p == 2)
		swap_in(a, b);
	else if (size - p > 2)
		qs(a, b, size - p, pivotea(a , size - p));

	
	if (p == 2)
		swap_in(a, b);
	else if (p > 2)
		qsb(a, b, p, pivoteb(b , p));
		while (*b && p--)
	{
		moveup(b, biggest(*b));
		pa(a, b);
	}
}

void	algoritmo(t_nlist	**a, t_nlist	**b)
{
	qs(a, b, ft_nlstsize(*a), mediano(a));
	while (*b)
	{
		moveup(b, biggest(*b));
		pa(a, b);
	}
		// printaAB(*a, *b);
	ft_end(a, b);
}

// void algoritmo(t_nlist **a, t_nlist **b)
// {
// int count = 0;
// while (*a)
// 	{
// 	pb(a, b);
// 	count++;
// 	}
//     // Verifica si se pueden mover elementos de la pila "b" a la pila "a"
//         pa(a, b);
	
//     while (count > 1 && (*b)->num > (*a)->num)
//     {
//         pa(a, b);

//         // Verifica si el elemento movido necesita ser movido de regreso a la pila "b"
//         if ((*b)->num < (*b)->next->num)
//         {
//             sb(b);
//         }

//         count--;
//     }

// // Mueve los elementos restantes de la pila "b" a la pila "a"
// while (*b)
// 	{
// 		pa(a, b);

// 		// Verifica si el elemento movido necesita ser movido de regreso a la pila "b"
// 		if ((*b) && (*b)->next)
// 		if ((*b)->num < (*b)->next->num)
// 		{
// 			sb(b);
// 		}
// 	}
// 	 printaAB(*a, *b);
// ft_end(a, b);
// }