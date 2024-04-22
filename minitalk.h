/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybellocq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:37:45 by ybellocq          #+#    #+#             */
/*   Updated: 2023/07/06 15:38:01 by ybellocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include "ft_printf/ft_printf.h"
# include "utils.c"
# include "utils2.c"

char	get_char(int sig);
char	*ft_strdup(const char *s);
char	*ft_strjoin_char(char *str, const char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);

#endif
