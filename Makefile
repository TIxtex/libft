# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uherrero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 19:37:36 by uherrero          #+#    #+#              #
#    Updated: 2019/11/17 20:05:10 by uherrero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILER = gcc
FLAGS = -Wall -Wextra -Werror

SOURCES = ft_atoi.c ft_itoa.c ft_calloc.c

SOURCES_CHAR = ft_char/ft_isalnum.c ft_char/ft_isalpha.c ft_char/ft_isascii.c\
ft_char/ft_isdigit.c ft_char/ft_isprint.c ft_char/ft_isspace.c\
ft_char/ft_tolower.c ft_char/ft_toupper.c

SOURCES_MEM = ft_mem/ft_bzero.c ft_mem/ft_memccpy.c ft_mem/ft_memchr.c\
ft_mem/ft_memcmp.c ft_mem/ft_memcpy.c ft_mem/ft_memmove.c ft_mem/ft_memset.c

SOURCES_STR = ft_str/ft_split.c ft_str/ft_strchr.c ft_str/ft_strdup.c\
ft_str/ft_strjoin.c ft_str/ft_strlcat.c ft_str/ft_strlcpy.c ft_str/ft_strlen.c\
ft_str/ft_strmapi.c ft_str/ft_strncmp.c ft_str/ft_strnstr.c ft_str/ft_strrchr.c\
ft_str/ft_strrev.c ft_str/ft_strtrim.c ft_str/ft_substr.c

SOURCES_PUT = ft_put/ft_putchar_fd.c ft_put/ft_putendl_fd.c\
ft_put/ft_puterror.c ft_put/ft_putnbr_fd.c ft_put/ft_putstr_fd.c

SOURCES_LST = ft_lst/ft_lstadd_back_bonus.c ft_lst/ft_lstadd_front_bonus.c\
ft_lst/ft_lstclear_bonus.c ft_lst/ft_lstlstdelone_bonus.c\
ft_lst/ft_lstiter_bonus.c ft_lst/ft_lstlast_bonus.c ft_lst/ft_lstmap_bonus.c\
ft_lst/ft_lstnew_bonus.c ft_lst/ft_lstsize_bonus.c

SOURCES_GNL = ft_gnl/get_next_line.c

OBJECTS = $(SOURCES:.c=.o) $(SOURCES_CHAR:.c=.o) $(SOURCES_MEM:.c=.o) $(SOURCES_STR:.c=.o) $(SOURCES_PUT:.c=.o) $(SOURCES_LST:.c=.o) $(SOURCES_GNL:.c=.o)

.PHONY: all clean fclean f re

$(NAME): $(SOURCES) $(SOURCES_CHAR) $(SOURCES_MEM) $(SOURCES_STR) $(SOURCES_PUT) $(SOURCES_LST) $(SOURCES_GNL)
	$(COMPILER) $(FLAGS) -c $(SOURCES) $(SOURCES_CHAR) $(SOURCES_MEM) $(SOURCES_STR) $(SOURCES_PUT) $(SOURCES_LST) $(SOURCES_GNL)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

all: $(NAME)
clean:
	/bin/rm -rf $(OBJECTS)
fclean: clean
	/bin/rm -rf $(NAME)
f: fclean
re: fclean all
