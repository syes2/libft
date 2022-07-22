# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungbae <seungbae@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 16:23:44 by seungbae          #+#    #+#              #
#    Updated: 2022/07/22 17:18:15 by seungbae         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a
SRC         :=      ft_memset.c ft_bzero.c ft_memcpy.c\
            ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c\
        	ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
        	ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
        	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
        	ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c\
        	\
        	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
        	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
        	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ			:=	$(SRC:.c=.o)

CFLAGS		:=	-Wall -Wextra -Werror

OBJECTS = $(OBJ)

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJECTS)
	ar -rc $@ $^

*.o:		*.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f $(NAME)

re:			fclean all
