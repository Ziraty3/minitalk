/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:02:55 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/12 15:52:04 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	nc;
	char			*ptr;

	nc = ((unsigned char)c);
	ptr = ((char *)s);
	while (ptr[0])
	{
		if (ptr[0] == nc)
			return (ptr);
		ptr++;
	}
	if (ptr[0] == nc)
		return (ptr);
	return (NULL);
}
// int	main(int argc, char **argv)
// {
// 	int count_c = ft_strlen(argv[2]);
// 	int	c = (int)argv[2][0];
// 	char *s = argv[1];
// 	if (argc != 3)
// 	{
// 		printf("%s", "Need 2 arguments");
// 		return (0);
// 	}
// 	if (count_c != 1)
// 	{
// 		return (0);
// 	}
// 	printf("%s", ft_strchr(s, c));
// }