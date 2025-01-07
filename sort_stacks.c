/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:19:35 by jpatrici          #+#    #+#             */
/*   Updated: 2025/01/07 17:29:09 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// index the stack, to use radix sort.
t_stack	*getmin(t_stack *head)
{
	t_stack	*min;
	t_stack	*p;
	t_stack	*node;

	min = NULL;
	node = head;
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
		min = node;
//	printf("nbr:\t%i\nindex:\t%i\n------\n", node->content, node->index);
//	printf("min: %i\n------\n", min);		
	node = node->next;
	}
	return (min);
}

t_stack	*sorting(t_stack **a, t_stack **b)
{
	t_stack	*min;

	min = getmin(*a);
	if (is_sorted(a))
	{
		printf("Sorted!\n");
		return (*a);
	}
	else
		printf("Not sorted\n");
	if (ft_stacksize(*a) == 2)
		swap(a, 'a');
	else if (ft_stacksize(*a) == 3)
		threesort(a);
	else if (ft_stacksize(*a) == 4 || ft_stacksize(*a) == 5)
		four_five_sort(a, b, min);
	else
		radix_sort(a, b);
	return (*a);
}

void	threesort(t_stack **a)
{
	if (is_sorted(a))
		return ;
	if ((*a)->index > (*a)->next->index &&
		(*a)->next->index > (*a)->next->next->index)
	{
		rot(a, 'a');
		swap(a, 'a');
	}
	else if ((*a)->index < (*a)->next->index &&
		(*a)->index < (*a)->next->next->index)
	{
		rrot(a, 'a');
		swap(a, 'a');
	}
	else if ((*a)->index > (*a)->next->index && 
		(*a)->index > (*a)->next->next->index)
		rot(a, 'a');
	else if ((*a)->index > (*a)->next->index && 
		(*a)->index < (*a)->next->next->index)
		swap(a, 'a');
	else
		rrot(a, 'a');
}

void	four_five_sort(t_stack **a, t_stack **b, t_stack *min)
{
	while (min->content != (*a)->content)
	{
		if (min->next == NULL)
			rrot(a, 'a');
		else
			rot(a, 'a');
	}
	push(b, a, 'a');
	if (ft_stacksize(*a) == 4)
	{
		while ((*a)->index != 1)
		{
			if ((stacklast(*a))->index == 1)
				rrot(a, 'a');
			else
				rot(a, 'a');
		}
		push(b, a, 'a');
	}	
	threesort(a);
	if (ft_stacksize(*b) == 2)
		push(a, b, 'b');
	push(a, b, 'b');
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	bit;

	bit = 0;
	if ((*a)->index >> bit & 1)
		rot(a, 'a');
	else
		push(b, a, 'a');
}

int	is_sorted(t_stack **a)
{
	t_stack	*temp;
	int		count;

	temp = *a;
	count = 1;
	while (temp->next)
	{
		count += (temp->content < temp->next->content);
		temp = temp->next;
	}
	return ((count == ft_stacksize(*a)));
}
