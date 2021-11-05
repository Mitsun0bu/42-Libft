# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 14:36:18 by llethuil          #+#    #+#              #
#    Updated: 2021/11/05 14:47:06 by llethuil         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

INCS = ./includes/ft.h

SRCS = \
./srcs/ft_atoi.c \
./srcs/ft_bzero.c \
./ft_calloc \
./ft_isalnum \
./ft_isalpha \
./ft_isascii \
./ft_isdigit \
./ft_isprint \
./*ft_itoa \
./*ft_memchr \
./ft_memcmp \
./ft_memcpy \
./ft_memmove \
./ft_memset \
./ft_putchar_fd \
./ft_putendl_fd \
./ft_putnbr_fd \
./ft_putstr_fd \
./ft_split \
./ft_strchr \
./ft_strdup \
./ft_striteri \
./ft_strjoin \
./ft_strlcat \
./ft_strlcpy \
./ft_strlen \
./ft_strmapi \
./ft_strncmp \
./ft_strnstr \
./ft_strrchr \
./ft_strtrim \
./ft_substr \
./ft_tolower \
./ft_toupper

FLAGS = -Wall -Wextra -Werror -I ${INCS}

OBJS = ${SRCS:.c=.o}

CC = gcc

all: ${NAME}

${OBJS}: ${SRCS}
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
