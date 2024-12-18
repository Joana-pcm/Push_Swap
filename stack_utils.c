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
