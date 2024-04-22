/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:44:35 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/11 16:02:53 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

// int	main(void)
// {
// 	printf("%c", toupper('a'));
// 	printf("%c", toupper('z'));
// 	printf("%c", toupper('Z'));
// }