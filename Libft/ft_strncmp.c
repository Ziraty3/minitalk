/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:39:27 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/12 11:13:30 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n -1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
// int	main(int argc, char **argv)
// {
// 	char	*s1 = argv[1];
// 	char	*s2 = argv[2];
// 	if (argc != 3)
// 	{
// 		printf("%s", "Need 2 arguments");
// 		return (0);
// 	}
// 	printf("%i", ft_strncmp(s1, s2, 4*sizeof(char)));
// }
