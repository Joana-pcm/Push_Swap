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

typedef	struct s_dlists {
	int				content;
	int				index;
	struct s_dlists *next;
	struct s_dlists *prev;
}					d_list;

#endif
