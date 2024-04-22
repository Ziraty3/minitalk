/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:05:34 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/12 10:50:14 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	count)
{
	size_t	i;
	size_t	j;

	if (count <= ft_strlen(dest))
		return (count + ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	while (i + 1 < count && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
// int main(void)
// {
// 	char dest[19] = "Je suis ";
// 	char *src = "une loutre";
// 	size_t count = 10;

// 	printf("%li", ft_strlcat(dest, src, count));
// }