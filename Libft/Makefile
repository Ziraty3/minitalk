# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ziratya <ziratya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 15:56:54 by gvalogne          #+#    #+#              #
#    Updated: 2024/03/11 09:57:44 by ziratya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS            =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c	\
					ft_isascii.c ft_isdigit.c ft_isprint.c						\
					ft_memchr.c ft_memmove.c ft_memset.c ft_memcmp.c			\
					ft_memcpy.c ft_strchr.c ft_strdup.c							\
					ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c			\
					ft_strnstr.c ft_substr.c ft_strrchr.c ft_tolower.c			\
					ft_toupper.c ft_strjoin.c ft_strtrim.c ft_split.c			\
					ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c		\
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c				\
					ft_strjoin_char.c ft_str_isnumeric.c						\
					ft_lstnew_bonus.c ft_lstsize_bonus.c						\
					ft_lstlast_bonus.c ft_lstadd_back_bonus.c					\
					ft_lstdelone_bonus.c ft_lstclear_bonus.c					\
					ft_lstiter_bonus.c ft_lstmap_bonus.c						\
					ft_lstadd_front_bonus.c										\

OBJS            = $(SRCS:.c=.o)

CC                = cc
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror -I.mak

NAME            = libft.a

all:            $(NAME)

$(NAME):        $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:            clean
				$(RM) $(NAME)

re:                fclean $(NAME)

.PHONY:            all clean fclean rema