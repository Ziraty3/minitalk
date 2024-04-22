/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:42:32 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/23 16:26:25 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*bigc;
	char	*littlec;
	size_t	i;
	size_t	j;

	i = 0;
	bigc = ((char *)big);
	littlec = ((char *)little);
	if (little[0] == '\0')
		return (bigc);
	while (bigc[i] && i < len)
	{
		j = 0;
		while (bigc[i + j] == littlec[j] && i + j < len)
		{
			if (bigc[i] == '\0')
				return (NULL);
			if (littlec[j + 1] == '\0')
				return (bigc + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
