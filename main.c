/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:17:27 by xmatute-          #+#    #+#             */
/*   Updated: 2022/10/28 16:09:43 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char const *argv[])
{
	t_nlist	*a;

	if (argc < 1)
		return (ft_puterror());
	a = getimput(argc, argv);
	if (!listimput(argc, argv))
		return (ft_puterror());
}
