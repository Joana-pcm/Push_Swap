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

t_stack	*stack_new(char *av)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->content = ft_atol(av);
	node->index = 0;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

void	stack_addback(t_stack **a, t_stack *node)
{
	t_stack	*p;

	p = *a;
	if (!p)
	{
		*a = node;
		return ;
	}
	while (p->next)
		p = p->next;
	p->next = node;
}

void	stack_init(t_stack **lst,char **av)
{
	t_stack	*n;

	*lst = stack_new(*av);
	if (!lst)
		return ;
	n = *lst;
	while (n && (*(++av)))
	{
		stack_addback(lst, stack_new(*av));
		n = n->next;
	}
}

t_stack	*findlastnode(t_stack *stack)
{
	t_stack	*p;

	p = stack;
	if (!p)
		return (0);
	while (p->next)
		p = p->next;
	return (p);
}
