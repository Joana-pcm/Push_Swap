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

int	main(int ac, char **av)
{
	int		i;
	int		j;
	t_stack	*a;
	t_stack	*b;

	i = 0;
	j = 0;
	a = NULL;
	b = NULL;

	if (ac >= 2)
	{
		av = formatting(ac, av);
		if (!valid_input(av))
			return (0);
		init_a(&a, av);
		/*if (!sorted(a))*/
		/*	sort_stacks(a, b);*/
		/*else*/
		/*	ft_printf("Sorted!");*/
	}
	else
		return (0);
}

int	valid_input(char **s)
{
	int i;
	int	j;

	i = 0;
	while (s[i] != 0)
	{		
		j = (checkchr(s[i])) * (ft_atol(s[i]) <= INT_MAX 
			|| ft_atol(s[i]) >= INT_MIN);
	}
	j *= checkrepeat(s);
	return (j);
}

long	ft_atol(char *nptr)
{
	long	res;
	int	i;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (*nptr == '\010')
		return (0);
	while ((nptr[i] >= '\b' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -sign;
	while ((nptr[i] >= '0' && nptr[i] <= '9') && nptr[i] != '\0')
		res = res * 10 + nptr[i++] - '0';
	return (res * sign);
}
