/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:32:05 by xmatute-          #+#    #+#             */
/*   Updated: 2022/10/28 18:20:19 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static unsigned int	palabras(char const *s)
{
	unsigned int	p;

	p = 0;
	while (*(s++))
		if ((*s == 0 || ft_isspace(*s)) && !ft_isspace(*(s - 1)))
			p++;
	return (p);
}

static size_t	ft_wlen(const char *s)
{
	int	l;

	l = 0;
	while (s[l] && !ft_isspace(s[l]))
		l++;
	return (l);
}

static char	**liberate(char ***f, unsigned int p)
{
	unsigned int	i;
	char			**sl;

	i = 0;
	sl = *f;
	while (i < p && sl[i])
	{
		free(sl[i]);
		i++;
	}
	free(sl);
	return (NULL);
}

char	**ft_ssplit(char const *s)
{
	char			**sl;
	unsigned int	i;
	unsigned int	p;

	sl = malloc(sizeof(char *) * (palabras(s) + 1));
	if (!sl)
		return (0);
	i = 0;
	p = 0;
	while (ft_isspace(s[i]) && s[i])
		i++;
	while (s[i])
	{
		sl[p] = ft_substr(s, i, ft_wlen(s + i));
		if (!sl[p])
			return (liberate(&sl, p));
		p++;
		i = i + ft_wlen(s + i);
		while (ft_isspace(s[i]) && s[i])
			i++;
	}
	sl[p] = 0;
	return (sl);
}

void	*ft_free2d(char ***f)
{
	unsigned int	i;
	char			**sl;

	if (*f)
	{
		i = 0;
		sl = *f;
		while (sl[i])
		{
			free(sl[i]);
			i++;
		}
		free(sl);
		return (NULL);
	}
}
