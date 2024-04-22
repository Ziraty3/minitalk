/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:06:51 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/23 16:17:41 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return ((char *)dest);
}

// int	main(void)
// {
// 	char dest[] = "Je suis la";
// 	char src[] = "Tu es la";

// 	printf("%s", (char *)ft_memcpy(dest, src, 5));
// }