/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:32:34 by jpatrici          #+#    #+#             */
/*   Updated: 2025/01/02 15:57:01 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"libft/libft.h"
# include	"limits.h"
# include	<stdbool.h>

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
//	****************utils*******************
t_stack	*stack_new(char *av);
void	stack_addback(t_stack **a, t_stack *node);
void	stack_init(t_stack **lst,char **av);
int	ft_stacksize(t_stack *a);
t_stack	*stacklast(t_stack *a);
//	*********sorting functions**************
int	getmin(t_stack *a, t_stack *head);
void	ft_index(t_stack **a);
t_stack	*sorting(t_stack **a, t_stack **b);
int	is_sorted(t_stack **a);
//	***********move functions***************
void	push(t_stack **dest, t_stack **src, char c);
void	swap(t_stack **a, char c);
void	rot(t_stack **a, char c);
void	rrot(t_stack **a, char c);
void	simmoves(t_stack **a, t_stack **b, char move);

#endif
