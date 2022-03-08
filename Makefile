# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 19:37:36 by ulherrer          #+#    #+#              #
#    Updated: 2022/03/08 21:06:03 by ulherrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDE = \
libft.h \
ft_gnl/get_next_line.h

DIR_CHAR = ft_char/
DIR_MEM = ft_mem/
DIR_STR = ft_str/
DIR_PUT = ft_put/
DIR_LST = ft_lst/
DIR_GNL = ft_gnl/
DIR_OBJECTS = d_objects/

SOURCES = \
ft_atoi.c \
ft_itoa.c \
ft_calloc.c

SOURCES_CHAR = \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_isspace.c \
ft_tolower.c \
ft_toupper.c \

SOURCES_MEM = \
ft_bzero.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c

SOURCES_STR = \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strrev.c \
ft_strtrim.c \
ft_substr.c

SOURCES_PUT = \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_puterror.c \
ft_putnbr_fd.c \
ft_putstr_fd.c

SOURCES_LST = \
ft_lstadd_back_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstclear_bonus.c \
ft_lstdelone_bonus.c \
ft_lstiter_bonus.c \
ft_lstlast_bonus.c \
ft_lstmap_bonus.c \
ft_lstnew_bonus.c \
ft_lstsize_bonus.c

SOURCES_GNL = \
get_next_line.c

ALL_CHAR = $(SOURCES_CHAR:%.c=$(DIR_CHAR)%.c)
ALL_MEM = $(SOURCES_MEM:%.c=$(DIR_MEM)%.c)
ALL_STR = $(SOURCES_STR:%.c=$(DIR_STR)%.c)
ALL_PUT = $(SOURCES_PUT:%.c=$(DIR_PUT)%.c)
ALL_LST = $(SOURCES_LST:%.c=$(DIR_LST)%.c)
ALL_GNL = $(SOURCES_GNL:%.c=$(DIR_GNL)%.c)
ALL_SOURCES = $(SOURCES) $(ALL_CHAR) $(ALL_MEM) $(ALL_STR) $(ALL_PUT) $(ALL_LST) $(ALL_GNL)

OBJECTS = \
$(ALL_SOURCES:.c=.o)

.PHONY: all clean fclean f re

$(NAME): $(OBJECTS) $(INCLUDE)
#	$(COMPILER) $(FLAGS) -c $(ALL_SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

all: $(NAME)
clean:
	/bin/rm -rf $(OBJECTS)
fclean: clean
	/bin/rm -rf $(NAME)
f: fclean
re: fclean all
