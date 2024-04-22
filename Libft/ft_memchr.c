/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:39:28 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/23 17:06:16 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	u_c;
	char	*str;
	size_t	i;

	i = 0;
	str = ((char *)s);
	u_c = (char)c;
	while (i < n)
	{
		if (str[0] == u_c)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
// int	main(int argc, char **argv)
// {
// 	int count_c = ft_strlen(argv[2]);
// 	int	c = (int)argv[2][0];
// 	char *s = argv[1];
// 	size_t n = 4;

// 	if (argc != 3)
// 	{
// 		printf("%s", "Need 2 arguments");
// 		return (0);
// 	}
// 	if (count_c != 1)
// 	{
// 		return (0);
// 	}
// 	printf("%s", (char*)ft_memchr(s, c, n));
// }