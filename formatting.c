/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:18:53 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/09 17:16:25 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

char	*ft_join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*joint;

	i = -1;
	j = -1;
	joint = malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char ));
	if (!joint)
		return (NULL);
	while (s1[++i])
		joint[i] = s1[i];
	joint[i++] = ' ';
	while (s2[++j])
		joint[i++] = s2[j];
	joint[i] = '\0';
	free(s1);
	return (joint);
}

char	**formatting(int ac, char **av)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	temp = ft_strdup(av[1]);
	if (ac < 1)
		return (0);
	while (ac > 2)
	{
		temp = ft_join(temp, av[i + j]);
		j++;
		ac--;
	}
	av = ft_split(temp, ' ');
	free(temp);
	i = -1;
	while (av[++i] != 0)
		av[i] = trim_start(av[i]);
	return (av);
}

char	*trim_start(char *s)
{
	int		n;
	char	*res;

	n = -1;
	n += (s[0] == '-' && ft_isdigit(s[1]));
	while (s[++n] && (s[n] == '0' || (s[n] == '+' && ft_isdigit(s[n + 1]))))
	{
		if (s[n] == '0' && s[n + 1] == '\0')
		{
			free(s);
			return (ft_strdup("0"));
		}
	}
	if (s[0] == '-' && ft_isdigit(s[1]))
		s[--n] = '-';
	res = ft_substr(s, n, ft_strlen(s));
	free(s);
	return (res);
}
