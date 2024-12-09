/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:32:34 by jpatrici          #+#    #+#             */
/*   Updated: 2024/12/03 12:00:30 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"libft/libft.h"
# include	"limits.h"

typedef	struct s_dlists {
	int			content;
	int				index;
	struct s_dlists *next;
	struct s_dlists *prev;
}					t_stack;

char	*trim_start(char *s);
char	**formatting(int ac, char **av);
int		valid_input(char **s);
long	ft_atol(char *nptr);
int		checkchr(char *s);
int		checkrepeat(char **s);
t_stack	*init_a(t_stack **a, char **av);
int	arrlen(char **av);

#endif

