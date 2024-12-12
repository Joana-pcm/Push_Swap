/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:20:04 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/10 16:46:34 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *dest, t_stack *src, char c)
{
	t_stack	*temp;

	if (!src)
		return ;
	temp = src;
	src = src->next;
	src->prev = NULL;
	temp->next = dest;
	if (dest)
		dest->prev = temp;
	else
	{
		dest = temp;
		temp->next = NULL;
	}
	ft_printf("p%c\n", c);
}

void	swap(t_stack *a, char c)
{
	t_stack	*temp;
	if (!a || !a->next)
		return ;
	temp = a;
	a = a->next;
	a->next = temp;
	temp = 
	if (c != 's')
		ft_printf("s%c\n", c);
}

void	rot(t_stack *a, char c)
{
	t_stack	*temp;

	if (!a || !a->next)
		return ;
	temp = findlastnode(a);
	
	ft_printf("r%c\n", c);
}

void	rrot(t_stack *a, char c)
{
	
	ft_printf("rr%c\n", c);
}

void	moveab(t_stack *a, t_stack *b, char move)
{
	if (move == 's')
	{
		swap(a, 's');
		swap(b, 's');
		ft_printf("ss\n");
	}
	else if (move == 'p')
	{
		push(a, b, 'p');
		push(b, a, 'p');	
		ft_printf("pp\n");
	}
	else if (move == 'r')
	{
		rot(a, 'r');
		rot(b, 'r');
		ft_printf("rr\n");
	}
	else if (move == 'i')
	{
		rrot(a, 'r');
		rrot(b, 'r');
		ft_printf("rrr\n");
	}
}
