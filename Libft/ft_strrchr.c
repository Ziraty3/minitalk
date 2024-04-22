/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:30:05 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/12 10:55:56 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	nc;
	char			*ptr;
	char			*i;

	i = 0;
	nc = ((unsigned char)c);
	ptr = ((char *)s);
	while (ptr[0])
	{
		if (ptr[0] == nc)
		{
			i = (char *)ptr;
		}
		ptr++;
	}
	if (ptr[0] == nc)
	{
		i = (char *)ptr;
	}
	if (ptr != 0)
		return (i);
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
// 	printf("%s", ft_strrchr(s, c));
// }