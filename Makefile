# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jechoisn <jechoisn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/07 14:21:36 by jechoisn          #+#    #+#              #
#    Updated: 2017/01/06 14:53:12 by kberon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS	= -Wall -Wextra -Werror

CC		= gcc $(FLAGS)

INCS 	= -I./incs -I./libft

LIBS	= ./libft

LIBFT 	= -L$(LIBS) -lft

LANGAGE	= c

NAME	= fillit

SRC_DIR = srcs

OBJ_DIR = objs

LIST 	= 	main \
			exitt \
			data \
			reader \
			parse \


SRC := $(addprefix $(SRC_DIR)/, $(addsuffix .$(LANGAGE), $(LIST)))
OBJ := $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(LIST)))

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBS)
	$(CC) $(OBJ) -o $@ $(FLAGS) $(INCS) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.$(LANGAGE)
	mkdir -p $(dir $@)
	$(CC) $(INCS) -o $@ -c $<

clean:
	make clean -C $(LIBS)
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	make fclean -C $(LIBS)
	/bin/rm -f $(NAME)

re: fclean $(NAME)

test: $(NAME)
	./fillit < ./test.txt


.PHONY: all clean fclean re libft fillit
