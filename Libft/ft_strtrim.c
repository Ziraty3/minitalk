/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:26:31 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/15 19:15:49 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_search(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_char_search(s1[start], set))
		start++;
	while (end > start && ft_char_search(s1[end - 1], set))
		end--;
	new = ft_substr(s1, start, end - start);
	return (new);
}
