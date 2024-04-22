/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:50:31 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/03 10:20:10 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		*((unsigned char *)s + i++) = (unsigned char)c;
	}
	return (s);
}
// int	main(void)
// {
// 	char c;
// 	char s[7] = "\0";
// 	c = 't';
// 	printf("%s", (char *)ft_memset(s, c, 7*sizeof(char)));
// }