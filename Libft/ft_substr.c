/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:32:23 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/23 17:18:03 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;

	j = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len && ft_strlen(s + start) < len)
		len = ft_strlen(start + s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str[j] = '\0';
		return (str);
	}
	while (s[start] && j < len)
	{
		str[j] = s[start];
		start++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
