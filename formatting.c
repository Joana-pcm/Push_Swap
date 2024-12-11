/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:18:53 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/09 17:16:25 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"


char	**formatting(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 1)
		return (0);
	av = ft_split(av[i + 1], ' ');
	i = -1;
	while (av[++i] != 0)
		av[i] = trim_start(av[i]);
	return (av);
}

char	*trim_start(char *s)
{
	int		n;
	char	*res;

	n = -1;
	n += (s[0] == '-' && ft_isdigit(s[1]));
	while (s[++n] && (s[n] == '0' || (s[n] == '+' && ft_isdigit(s[n + 1]))))
	{
		if (s[n] == '0' && s[n + 1] == '\0')
			return ("0");
	}
	if (s[0] == '-' && ft_isdigit(s[1]))
		s[--n] = '-';
	res = ft_substr(s, n, ft_strlen(s));
	free(s);
	return (res);
}
