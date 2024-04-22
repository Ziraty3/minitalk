/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:16:42 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/11 18:47:04 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t	destsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	if (!src || !dest)
		return (0);
	if (destsize == 0)
		return (srcsize);
	while ((i < destsize - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (srcsize);
}
// int	main(void)
// {
// 	char dest[10];
// 	char src[10] = "hey you";
// 	printf("%i", (int)ft_strlcpy(dest, src, 10));
// 	return (0);
// }