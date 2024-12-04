/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:30:05 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/04 11:37:31 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkinput(char **s);

int	main(int ac, char **av)
{
	int	i;
	int j;
	char	**strs;

	i = 0;
	j = 0;

	if (ac >= 2)
	{
		av = trim(ac, av);
		strs = ft_split(av[i], ' ');
		if (!checkinput(strs))
			return (0);
	}
}

int	checkinput(char **s)
{
	int i;
	int	j;

	i = 0;
	j = 1;
	while (s[i] != 0)
	{
		j *= (checkchr(s[i]));
	}
	j *= checkrepeat(s);
	return (j);
}
