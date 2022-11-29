/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:50:23 by xmatute-          #+#    #+#             */
/*   Updated: 2022/11/29 17:07:07 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// # include	<stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
// # include <fcntl.h>
// # include <sys/stat.h>
// # include <stdlib.h>
// # include <sys/types.h>

typedef struct s_nlist
{
	int				num;
	struct s_nlist	*next;
}					t_nlist;

 void printnlst(t_nlist* l);
 void printaAB(t_nlist* a, t_nlist* b);

int		ft_isdigit(int arg);
int		ft_isspace(char c);
size_t	ft_wlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t num);

t_nlist	*ft_lstnew(int num);
void	ft_nlstadd_front(t_nlist **lst, t_nlist *new);
void	ft_nlstfree(t_nlist	**a);
t_nlist	*ft_nlstlast(t_nlist *lst);
t_nlist	*ft_nlstpenlast(t_nlist *lst);
int		ft_nlstsize(t_nlist *lst);
size_t	ft_nlstbigger(t_nlist	*l, int n);
size_t	ft_nlstsmaller(t_nlist	*l, int n);

int	inorder(t_nlist	*a);
int	inorderb(t_nlist	*a);
void check(t_nlist	**a, t_nlist	**b);

void case2(t_nlist	**a, t_nlist	**b);
void case3(t_nlist	**a, t_nlist	**b);

void	ps(t_nlist	**a,  t_nlist	**b);

void o3a(t_nlist	**a, t_nlist	**b);
void o3b(t_nlist	**a, t_nlist	**b);

void	push(t_nlist	**from, t_nlist	**to);
void	pa(t_nlist	**a, t_nlist	**b);
void	pb(t_nlist	**a, t_nlist	**b);

void	swap(t_nlist	**l);
void	sa(t_nlist	**a);
void	sb(t_nlist	**b);
void	ss(t_nlist	**a, t_nlist	**b);

void	swap_in(t_nlist	**a, t_nlist	**b);

void	rotate(t_nlist	**l);
void	ra(t_nlist	**a);
void	rb(t_nlist	**b);
void	rr(t_nlist	**a, t_nlist	**b);

void	rrotate(t_nlist	**l);
void	rra(t_nlist	**a);
void	rrb(t_nlist	**b);
void	rrr(t_nlist	**a, t_nlist	**b);

int	ft_error(void);
void ft_lsterror(t_nlist	**a, t_nlist	**b);

void ft_end(t_nlist	**a, t_nlist	**b);

int	imputerror(int argc, char const *argv[]);

int	numeric2(int n, char const *s2[]);
int	inrange2(int n, char const *s2[]);
void	checkrep(t_nlist	**a);


// int		ft_isspace(char c);

// size_t	ft_strlen(const char *s);
// int		ft_strncmp(const char *str1, const char *str2, size_t num );

// void	ft_putchar(char c);
// void	ft_putstr(char *s);
// int		ft_puterror(void);
// void	ft_putnbr(int n);

#endif