#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboddez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/20 15:57:51 by kboddez           #+#    #+#              #
#    Updated: 2016/12/21 08:00:15 by kboddez          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC_NAME = ft_putstr.c ft_strcmp.c ft_putchar.c ft_strlen.c ft_swap.c

CFLAGS = -Wall -Werror -Wextra

SRC_PATH = ./srcs/
INC_PATH = ./includes/

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o : %.c
	@gcc $(CFLAGS) -o $@ -c $< -I $(INC_PATH)

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
