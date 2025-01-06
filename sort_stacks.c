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

// index the stack, to use radix sort.
int	getmin(t_stack *head)
{
	static	int	min;
	t_stack		*p;
	t_stack		*node;

	node = head;
	min = 0;
	while (node)
	{
		p = head;
		while (p)
		{
			if (node->content > p->content)
				++node->index;
			p = p->next;
		}
	if (node->index == 0)
		min = node->content;
//	printf("nbr:\t%i\nindex:\t%i\n------\n", node->content, node->index);
//	printf("min: %i\n------\n", min);
		node = node->next;
	}
		return (min);
}
/*
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
}*/

t_stack	*sorting(t_stack **a, t_stack **b)
{
//	ft_index(a);
	if (is_sorted(a))
		printf("Sorted!");
	if (ft_stacksize(*a) == 2)
		swap(a, 'a');
/*	else if (ft_stacksize(*a) == 3)
		threesort(a, b);
	else if (ft_stacksize(*a) == 4)
		foursort(a, b);
	else if (ft_stacksize(*a) == 5)
		fivesort(a, b);*/
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
