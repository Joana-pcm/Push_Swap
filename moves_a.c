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

void	push(t_stack *dest, t_stack *src)
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
		dest = temp;
}

void	swap(t_stack *a)
{}

void	rot(t_stack *a)
{}

void	rrot(t_stack *a)
{}
