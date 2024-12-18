/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:19:35 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/16 17:14:56 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sorting(t_stack **a, t_stack **b)
{
	if (is_sorted(a))
		ft_printf("Sorted!");
	if (ft_stacksize(*a) == 2)
		swap(a, 'a');
	else if (ft_stacksize(*a) == 3)
		threesort(a, b);
	else if (ft_stacksize(*a) == 4)
		foursort(a, b);
	else if (ft_stacksize(*a) == 5)
		fivesort(a, b);
	return (*a);
}

int	is_sorted(t_stack **a)
{
	t_stack	*temp;
	int		count;

	temp = *a;
	count = 0;
	while (temp->next)
	{
		count += (temp < temp->next);
		temp = temp->next;
	}
	return ((count == ft_stacksize(*a)));
}
