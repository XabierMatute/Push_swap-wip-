/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:50:23 by xmatute-          #+#    #+#             */
/*   Updated: 2022/10/28 20:46:12 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include	<stddef.h>
// # include    <stdlib.h>
// # include <unistd.h>
// # include <stdio.h>
// # include <fcntl.h>
// # include <sys/stat.h>
// # include <stdlib.h>
// # include <sys/types.h>

typedef struct s_nlist
{
	int				num;
	struct s_nlist	*next;
}					t_nlist;

int		ft_isspace(char c);

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t num );

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_puterror(void);
void	ft_putnbr(int n);

#endif