/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:58:53 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/04 17:07:56 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkchr(char *s)
{
	int	i;

	i = 0;
	if (ft_strlen(s) > 11)
		return 0;
	while (s[i])
	{
		if ((s[i] == '-' && s[i + 1] == '-') 
			|| (s[i] == '-' && !ft_isdigit(s[i + 1])) 
			|| (!ft_isdigit(s[i]) && s[i] != '-'))
			return (0);
		i++;
	}
	return (1);
}
int	checkrepeat(char **s)
{
	int	i;
	int	j;
	int result;
	
	i = 0;
	result = 1;
	while (s[i])
	{
		j = i;
		while (s[++j])
			result *= (ft_strncmp(s[i], s[j], 11));
		i++;
	}
	return (result);
}
