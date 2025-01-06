/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:20:04 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/10 16:46:34 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	push(t_stack **dest, t_stack **src, char c)
{
	t_stack	*p;

	if (!*src)
		return ;
	p = *src;
	*src = (*src)->next;
//	(*src)->prev = NULL;
	if (*dest)
	{
		p->next = *dest;
		(*dest)->prev = p;
		*dest = (*dest)->prev;
	}
	else
	{
		*dest = p;
		p->next = NULL;
	}
	if (c != 'p')
		printf("p%c\n", c);
}

void	swap(t_stack **a, char c)
{
	t_stack	*p;

	if (!*a || !a || !(*a)->next)
		return ;
	p = *a;
	*a = (*a)->next;
	p->next = (*a)->next;
	(*a)->prev = NULL;
	(*a)->next = p;

/*	*a = (*a)->next;
	(*a)->prev->prev = *a,
	(*a)->prev->next = (*a)->next;
	if ((*a)->next)
		(*a)->next->prev = (*a)->prev;
	(*a)->next = (*a)->prev;
	(*a)->prev = NULL;*/
	if (c != 's')
		printf("s%c\n", c);
}

void	rot(t_stack **a, char c)
{
	t_stack	*p;

	if (!*a || !(*a)->next)
		return ;
	p = stacklast(*a);
	p->next = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	p->next->prev = p;
	p->next->next = NULL;
	if (c != 'r')
		printf("r%c\n", c);
}

void	rrot(t_stack **a, char c)
{
	t_stack	*start;
	t_stack	*end;
	t_stack	*penult;

	if(!*a || !a || !(*a)->next)
		return ;
	start = *a;
	end = stacklast(*a);
	penult = *a;
	while (penult->next->next)
	{
		penult = penult->next;
	}
	*a = end;
	(*a)->next = start;
	penult->next = NULL;
	if (c != 'i')
		printf("rr%c\n", c);
}

void	simmoves(t_stack **a, t_stack **b, char move)
{
	if (move == 's')
	{
		swap(a, 's');
		swap(b, 's');
		printf("ss\n");
	}
	else if (move == 'p')
	{
		push(a, b, 'p');
		push(b, a, 'p');	
		printf("pp\n");
	}
	else if (move == 'r')
	{
		rot(a, 'r');
		rot(b, 'r');
		printf("rr\n");
	}
	else if (move == 'i')
	{
		rrot(a, 'r');
		rrot(b, 'r');
		printf("rrr\n");
	}
}
