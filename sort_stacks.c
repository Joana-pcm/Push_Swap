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

int	getmin(t_stack *a, t_stack *head)
{
	static	int	min;
	t_stack		*p;

	p = head;
	min = 0;
	printf("nbr: %i	index: %i	", a->content, a->index);
	printf("min: %i\n", min);
	while (p)
	{
		if (a->content > p->content)
			++a->index;
		p = p->next;
	}
	if (a->index == 0)
		min = a->content;
	return (min);
}

void	ft_index(t_stack **a)
{
	t_stack	*p;

	p = *a;
	printf("in index\n");
	while (p)
	{
		getmin(p, *a);
		p = p->next;
	}
}

t_stack	*sorting(t_stack **a, t_stack **b)
{
	ft_index(a);
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
