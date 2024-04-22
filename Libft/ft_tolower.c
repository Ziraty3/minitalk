/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:44:35 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/11 16:02:43 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

// int	main(void)
// {
// 	printf("%c", tolower('A'));
// 	printf("%c", tolower('Z'));
// 	printf("%c", tolower('z'));
// }