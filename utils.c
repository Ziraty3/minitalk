/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:38:54 by ziratya           #+#    #+#             */
/*   Updated: 2024/04/22 17:59:18 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	get_char(int sig)
{
	static unsigned char	c = 0;

	c |= (sig == SIGUSR2);
	c <<= 1;
	return (c);
}

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		slen;

	slen = ft_strlen(s);
	i = 0;
	str = malloc(sizeof (char) * (slen + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}