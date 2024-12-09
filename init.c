/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:52:33 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/09 16:52:22 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_a(t_stack **a, char **av)
{
	int	i;

	i = 0;
	a = malloc(sizeof(t_stack *) * arrlen(av));
	if (!a)
		return (0);
	while (av[i])
	{
		(*a)->content = ft_atol(av[i]);
		(*a)->index = i;
		(*a)->prev = (*a);
		(*a) = (*a)->next;
		i++;
	}
	return (*a);
}

int	arrlen(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}
