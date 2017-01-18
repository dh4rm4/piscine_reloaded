#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kboddez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/09 12:57:20 by kboddez           #+#    #+#              #
#    Updated: 2016/12/21 08:22:59 by kboddez          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

MAIN = main.c

SRC_NAME =  $(MAIN) ft_strlen.c

SRC_PATH = ./srcs/

INC_PATH = ./include/

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

CFLAGS = -Wall -Wextra -Werror -Ofast

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) -g -o $(NAME) $(OBJ)

%.o : %.c
	@gcc -o $@ -c $< -I $(INC_PATH)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
