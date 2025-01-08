# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 11:57:00 by jpatrici          #+#    #+#              #
#    Updated: 2025/01/08 13:59:17 by jpatrici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CCFLAGS = -Werror -Wall -Wextra

SRC = push_swap.c init.c moves.c sort_stacks.c \
	  checker.c formatting.c stack_utils.c

OBJS = $(SRC:.c=.o)

NAME = push_swap

LIBFT = ./libft/libft.a

LIBFTDIR = ./libft/

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) -o $(NAME) $(OBJS) $(LIBFT)

$(LIBFT): $(LIBFTDIR)
	$(MAKE) -C $(LIBFTDIR)

%.o: %.c
	@$(CC) $(CCFLAGS) -o $@ -c $<

clean: 
	@rm -f $(OBJS)
	$(MAKE) clean -C $(LIBFTDIR)

fclean: clean
	@rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFTDIR)
	@rm -fr push_swap_visualizer

re: fclean all

visualizer:
	git clone https://github.com/o-reo/push_swap_visualizer.git && \
	cd push_swap_visualizer && \
	mkdir build && \
	cd build && \
	cmake .. && \
	make && \
	./bin/visualizer
