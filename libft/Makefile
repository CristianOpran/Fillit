# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mienache <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 01:58:31 by mienache          #+#    #+#              #
#    Updated: 2018/01/04 02:39:43 by mienache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

C_FLAGS=-Wall -Wextra -Werror

SRC_DIR=./

INC_DIR=./

C_FILES =    ft_bzero.c \
            ft_memset.c \
            ft_memchr.c \
            ft_memcpy.c \
            ft_memcmp.c \
            ft_memrcpy.c \
            ft_memccpy.c \
            ft_memmove.c \
            ft_memalloc.c \
            ft_memdel.c

C_FILES +=    ft_abs.c \
            ft_count_digits.c

C_FILES +=    ft_putchar.c \
            ft_putchar_fd.c \
            ft_putstr.c \
            ft_putstr_fd.c \
            ft_putendl.c \
            ft_putendl_fd.c \
            ft_putnbr.c \
            ft_putnbr_fd.c \
            ft_putnbr_generic.c

C_FILES +=    ft_strlen.c \
            ft_strcpy.c \
            ft_strncpy.c \
            ft_strcat.c \
            ft_strncat.c \
            ft_strlcat.c \
            ft_strdup.c \
            ft_strchr.c \
            ft_strrchr.c \
            ft_strcmp.c \
            ft_strncmp.c \
            ft_strstr.c \
            ft_strnstr.c \
            ft_strnew.c \
            ft_strdel.c \
            ft_strmap.c \
            ft_strmapi.c \
            ft_strclr.c \
            ft_strsub.c \
            ft_strjoin.c \
            ft_strtrim.c \
            ft_strsplit.c \
            ft_striter.c \
            ft_striteri.c \
            ft_strequ.c \
            ft_strnequ.c \
            ft_isspace.c \
            ft_isalpha.c \
            ft_isdigit.c \
            ft_isalnum.c \
            ft_isascii.c \
            ft_isprint.c \
            ft_toupper.c \
            ft_tolower.c \
            ft_itoa.c \
            ft_itoa_generic.c \
            ft_atoi.c \
            ft_atoi_generic.c

C_FILES +=    ft_lstnew.c \
            ft_lstadd.c \
            ft_lstiter.c \
            ft_lstmap.c \
            ft_lstdel.c \
            ft_lstdelone.c

C_FILES +=    ft_vec_append.c \
            ft_vec_at.c \
            ft_vec_copy.c \
            ft_vec_del.c \
            ft_vec_move.c \
            ft_vec_new.c \
            ft_vec_newn.c \
            ft_vec_pop.c \
            ft_vec_pop_s.c \
            ft_vec_resize.c

SOURCES=$(patsubst %, $(SRC_DIR)%, $(C_FILES))

OBJECTS=$(patsubst %.c, %.o, $(C_FILES))

default: all

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS) : $(SOURCES)
	$(CC) $(C_FLAGS) -c $(SOURCES) -I$(INC_DIR)

fclean: clean
	rm -f $(NAME)

clean: 
	rm -f $(OBJECTS)

re: fclean all

.PHONY : clean fclean
