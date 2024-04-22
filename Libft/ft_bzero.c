/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:50:31 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/03 10:29:27 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		*((char *)s + i++) = 0;
	}
}
// int	main(void)
// {
// 	char s[30] = "Je suis con";

// 	ft_bzero(s, 7*sizeof(char));
// 	printf("%s", s);
// }