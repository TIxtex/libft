# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 19:37:36 by ulherrer          #+#    #+#              #
#    Updated: 2022/05/01 11:16:01 by ulherrer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = clang -std=c89
CFLAGS = -Wall -Wextra -Werror

INCLUDE = \
libft.h \
my_constant.h \
my_types.h \
ft_list/lst.h \
ft_gnl/get_next_line.h

DIR_BIT = ft_bit/
DIR_CTYPE = ft_ctype/
DIR_MEM = ft_mem/
DIR_NUM = ft_num/
DIR_STR = ft_str/
DIR_PUT = ft_put/
DIR_LIST = ft_list/
DIR_GNL = ft_gnl/
DIR_TIME = ft_cronos/

SOURCES_BIT = \
ft_bit_clear.c \
ft_bit_get.c \
ft_bit_set.c \
ft_bit_toggle.c \
ft_bit.c

SOURCES_NUM = \
ft_atoi.c \
ft_atol.c \
ft_itoa.c

SOURCES_CTYPE = \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_isspace.c \
ft_tolower.c \
ft_toupper.c

SOURCES_MEM = \
ft_bzero.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_calloc.c

SOURCES_STR = \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_striteri.c \
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

SOURCES_LIST = \
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

SOURCES_TIME = \
ft_time_now.c \
ft_time_diff.c

ALL_BIT = $(SOURCES_BIT:%.c=$(DIR_BIT)%.c)
ALL_CTYPE = $(SOURCES_CTYPE:%.c=$(DIR_CTYPE)%.c)
ALL_MEM = $(SOURCES_MEM:%.c=$(DIR_MEM)%.c)
ALL_NUM = $(SOURCES_NUM:%.c=$(DIR_NUM)%.c)
ALL_STR = $(SOURCES_STR:%.c=$(DIR_STR)%.c)
ALL_PUT = $(SOURCES_PUT:%.c=$(DIR_PUT)%.c)
ALL_LIST = $(SOURCES_LIST:%.c=$(DIR_LIST)%.c)
ALL_GNL = $(SOURCES_GNL:%.c=$(DIR_GNL)%.c)
ALL_TIME = $(SOURCES_TIME:%.c=$(DIR_TIME)%.c)

ALL_SOURCES = \
$(ALL_BIT) \
$(ALL_CTYPE) \
$(ALL_MEM) \
$(ALL_NUM) \
$(ALL_STR) \
$(ALL_PUT) \
$(ALL_LIST) \
$(ALL_GNL) \
$(ALL_TIME)

OBJECTS = \
$(ALL_SOURCES:.c=.o)

.PHONY: all clean fclean f re

$(NAME): $(OBJECTS) $(INCLUDE)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

all: $(NAME)
bonus: $(NAME)
clean:
	/bin/rm -rf $(OBJECTS)
fclean: clean
	/bin/rm -rf $(NAME)
f: fclean
re: fclean all
