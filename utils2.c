/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:05:31 by gvalogne          #+#    #+#             */
/*   Updated: 2024/04/22 14:10:50 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_strjoin_char(char *str, const char c)
{
	int		i;
	char	*joined;

	if (!c)
		return (NULL);
	if (!str)
		return (char_first(c));
	joined = (char *)malloc((ft_strlen(str) + 2) * sizeof(char));
	if (!joined)
	{
		free(str);
		return (NULL);
	}
	i = -1;
	while (str[++i])
		joined[i] = str[i];
	joined[i++] = c;
	joined[i] = '\0';
	return (joined);
}

static char	*char_first(char c)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putstr_fd("-", fd);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}