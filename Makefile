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

all: $(NAME)
$(NAME): ft_*.c
	gcc -Wall -Wextra -Werror -c ft_atoi.c
	gcc -Wall -Wextra -Werror -c ft_bzero.c
	gcc -Wall -Wextra -Werror -c ft_calloc.c
	gcc -Wall -Wextra -Werror -c ft_isalnum.c
	gcc -Wall -Wextra -Werror -c ft_isalpha.c
	gcc -Wall -Wextra -Werror -c ft_isascii.c
	gcc -Wall -Wextra -Werror -c ft_isdigit.c
	gcc -Wall -Wextra -Werror -c ft_isprint.c
	gcc -Wall -Wextra -Werror -c ft_isspace.c
	gcc -Wall -Wextra -Werror -c ft_memccpy.c
	gcc -Wall -Wextra -Werror -c ft_memchr.c
	gcc -Wall -Wextra -Werror -c ft_memcmp.c
	gcc -Wall -Wextra -Werror -c ft_memcpy.c
	gcc -Wall -Wextra -Werror -c ft_memmove.c
	gcc -Wall -Wextra -Werror -c ft_memset.c
	gcc -Wall -Wextra -Werror -c ft_strchr.c
	gcc -Wall -Wextra -Werror -c ft_strdup.c
	gcc -Wall -Wextra -Werror -c ft_strlcat.c
	gcc -Wall -Wextra -Werror -c ft_strlcpy.c
	gcc -Wall -Wextra -Werror -c ft_strlen.c
	gcc -Wall -Wextra -Werror -c ft_strncmp.c
	gcc -Wall -Wextra -Werror -c ft_strnstr.c
	gcc -Wall -Wextra -Werror -c ft_strrchr.c
	gcc -Wall -Wextra -Werror -c ft_tolower.c
	gcc -Wall -Wextra -Werror -c ft_toupper.c
	gcc -Wall -Wextra -Werror -c ft_substr.c
	gcc -Wall -Wextra -Werror -c ft_strjoin.c
	gcc -Wall -Wextra -Werror -c ft_strtrim.c
	gcc -Wall -Wextra -Werror -c ft_split.c
	gcc -Wall -Wextra -Werror -c ft_itoa.c
	gcc -Wall -Wextra -Werror -c ft_strrev.c
	gcc -Wall -Wextra -Werror -c ft_strmapi.c
	gcc -Wall -Wextra -Werror -c ft_putchar_fd.c
	gcc -Wall -Wextra -Werror -c ft_putstr_fd.c
	gcc -Wall -Wextra -Werror -c ft_putendl_fd.c
	gcc -Wall -Wextra -Werror -c ft_putnbr_fd.c
	ar rc $(NAME) *.o
bonus: $(NAME)
	gcc -Wall -Wextra -Werror -c ft_lstnew_bonus.c
	gcc -Wall -Wextra -Werror -c ft_lstadd_front_bonus.c
	gcc -Wall -Wextra -Werror -c ft_lstsize_bonus.c
	gcc -Wall -Wextra -Werror -c ft_lstlast_bonus.c
	gcc -Wall -Wextra -Werror -c ft_lstadd_back_bonus.c
	gcc -Wall -Wextra -Werror -c ft_lstdelone_bonus.c
	gcc -Wall -Wextra -Werror -c ft_lstclear_bonus.c
	gcc -Wall -Wextra -Werror -c ft_lstiter_bonus.c
	gcc -Wall -Wextra -Werror -c ft_lstmap_bonus.c
	ar rc $(NAME) *.o
clean:
	/bin/rm -rf *.o
fclean: clean
	/bin/rm -rf $(NAME)
re: fclean $(NAME)
