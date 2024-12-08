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
	int		i;
	int		j;
	stack	*a;
	stack	*b;

	i = 0;
	j = 0;
	a = NULL;
	b = NULL;

	if (ac >= 2)
	{
		av = formatting(ac, av);
		if (!valid_input(av))
			return (0);
		init_a(a, av);
		if (!sorted)
			sort_stacks(a, b);
		else
			ft_printf("Sorted!");
	}
	else
		return (0);
}

int	valid_input(char **s)
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
