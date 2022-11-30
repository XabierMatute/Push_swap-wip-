/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:36:45 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/30 09:51:34 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void cases(t_nlist	**a, t_nlist	**b)
{
	if (ft_nlstsize(*a) < 2)
		ft_end(a, b);
	else if (ft_nlstsize(*a) == 2)
		case2(a, b);
	else if (ft_nlstsize(*a) == 3)
		case3(a, b);
	else if (ft_nlstsize(*a) == 5)
		case5(a, b);
		ps(a, b);
}

void	listarg1(char const *s, t_nlist	**a)
{
	size_t	i;
	t_nlist	*node;

	i = 0;
	while (ft_isspace(s[i]))
			i++;
	if (s[i])
	{
		listarg1(s + i + ft_wlen(s + i), a);
		node = ft_lstnew(atoi(s + i));
		if (!node)
			ft_lsterror(a, 0);
		ft_nlstadd_front(a, node);
	}
}

void	listarg2(int n, char const *argv[])
{
	t_nlist	*a;
	t_nlist	*b;

	a = NULL;
	b = NULL;
	while (n-- > 1)
		listarg1(argv[n], &a);
	 //printnlst(a);
	checkrep(&a);
	cases(&a, &b);
}

int	main(int argc, char const *argv[])
{
	if (imputerror(argc, argv))
		ft_error();
	else if (argc > 1)
		listarg2(argc, argv);
	return (0);
}
