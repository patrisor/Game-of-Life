# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: patrisor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 21:05:51 by patrisor          #+#    #+#              #
#    Updated: 2019/05/28 02:32:46 by patrisor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GOL

SRCS = GOL.c

OBJ = *.o

FLAGS = -Wall -Wextra -Werror

FT_INC	= -I ./libft/includes

all: $(NAME)

$(NAME):
	@make -C libft
	@gcc $(FLAGS) $(FT_INC) -I . -c $(SRCS)
	@gcc $(OBJ) -L libft/ -lft -o $(NAME) -g

clean:
	@make -C libft/ clean
	@rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	@rm -f $(NAME)

re: fclean all

coffee:
	@sh libft/ignore

.PHONY: clean fclean all re coffee 
