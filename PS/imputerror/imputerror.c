/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imputerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:14:38 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/15 18:34:05 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	imputerror(int argc, char const *argv[])
{
	if (!numeric2(argc, argv))
		return(1);
	if (!inrange2(argc, argv))
		return(1);
	return (0);
}