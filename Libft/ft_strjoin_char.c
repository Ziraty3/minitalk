/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybellocq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:34:39 by ybellocq          #+#    #+#             */
/*   Updated: 2023/07/06 15:41:59 by ybellocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

