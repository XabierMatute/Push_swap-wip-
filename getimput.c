/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getimput.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:10:07 by xmatute-          #+#    #+#             */
/*   Updated: 2022/10/28 16:20:27 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



t_nlist	*getimput(int argc, char const *argv[])
{
	t_nlist	*a;

	argc--;
	while (argc)
	{
		if (!getnums(argv[argc], &a))
			return (end(&a));
		argc--;
	}
	return (a);
}