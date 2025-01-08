/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:44:03 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/17 12:46:31 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stacksize(t_stack *a)
{
	int		i;
	t_stack	*p;

	i = 0;
	p = a;
	if (!p)
		return (0);
	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}

t_stack	*stacklast(t_stack *a)
{
	t_stack	*p;

	p = a;
	if (!p)
		return (0);
	while (p->next)
		p = p->next;
	return (p);
}

void	freestacks(char **av, t_stack *a)
{
	t_stack	*temp;
	int		i;

	i = -1;
	while (av[++i])
	{
		free(av[i]);
	}
	free(av);
	while (a)
	{
		temp = a->next;
		free(a);
		a = temp;
	}
	(void) temp;
	(void) av;
	(void) a;
}

void	free_error()
{
	int	i;
	t_stack	temp;

	i = -1;
	ft_printf("Error\n");
	while (av[++i] || a || b)
	{
		if (av[i])
			free(av[i]);
		if (a)
		{
			temp = a;
			free(a);
			a = temp->next;
		}
		if (b)
			free(b);

	}
}
