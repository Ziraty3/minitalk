# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 16:21:16 by ziratya           #+#    #+#              #
#    Updated: 2024/04/22 17:49:32 by gvalogne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

PRINTF_DIR = ft_printf

SRC_SERVER = server.c
SRC_CLIENT = client.c
SRC_UTILS  = utils.c utils2.c
SRC_COMMON = minitalk.h

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_UTILS  = $(SRC_UTILS:.c=.o)

PRINTF = $(PRINTF_DIR)/libftprintf.a

all: server client

server: $(OBJ_SERVER) $(PRINTF) $(OBJ_UTILS)
	$(CC) $(CFLAGS) -o $@ $^

client: $(OBJ_CLIENT) $(PRINTF) $(OBJ_UTILS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(SRC_COMMON)
	$(CC) $(CFLAGS) -c $< -o $@

$(PRINTF):
	make -C $(PRINTF_DIR)

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)
	make -C $(PRINTF_DIR) clean

fclean: clean
	rm -f server client
	make -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
