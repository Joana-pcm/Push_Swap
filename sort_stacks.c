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
	if (ft_lstsize(a) == 2)
		swap(a, 'a');
	else if (ft_lstsize(a) == 3)
		threesort(a, b);
	else if (ft_lstsize(a) == 4)
		foursort(a, b);
	else if (ft_lstsize(a) == 5)
		fivesort(a, b);
	return (b);
}

void	threesort(t_stack **a, t_stack **b)
{
	if (a->content > a->next->content 
		&& a->next->content > a->next->next->content)
		

}
