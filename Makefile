# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mienache <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 02:10:57 by mienache          #+#    #+#              #
#    Updated: 2018/01/04 03:24:51 by mienache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =            cc

C_FLAGS =        -Wall -Wextra -Werror

NAME =            fillit

DEBUG =            $(NAME)_DBG

LIBFT_DIR =        ./libft

LIBFT =            $(LIBFT_DIR)/libft.a

INCLUDE_DIRS = includes\
                $(LIBFT_DIR)/includes

SRC_DIR =        ./src

SOURCE_FILES =    main.c \
                tgrid_buff_init.c \
                tgrid_place.c \
                tgrid_read_pieces.c \
                tgrid_resize.c \
                tgrid_solve.c \
                tgrid_unplace.c \
                tgrid_validate_pieces.c \
                tpc_parse.c \
                tgrid_init.c

SOURCES =        $(patsubst %, $(SRC_DIR)/%, $(SOURCE_FILES))

INCLUDES =        $(patsubst %, -I%, $(INCLUDE_DIRS))

all : $(NAME)

$(NAME) : $(SOURCES) $(LIBFT)
	$(CC) $(C_FLAGS) $(SOURCES) -o $(NAME) $(INCLUDES) -L$(LIBFT_DIR) -lft

$(DEBUG) : $(SOURCES) $(LIBFT)
	$(CC) $(C_FLAGS) $(SOURCES) -o $(DEBUG) $(INCLUDES) -L$(LIBFT_DIR) -lft \
    -fsanitize=address

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean :
	-$(MAKE) -C $(LIBFT_DIR) clean

fclean : clean
	-$(MAKE) -C $(LIBFT_DIR) fclean
	-rm -f $(NAME)
	-rm -f $(DEBUG)

re : fclean all

.PHONY : clean fclean re
