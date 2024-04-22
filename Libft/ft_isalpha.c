/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:40:32 by gvalogne          #+#    #+#             */
/*   Updated: 2023/12/28 14:38:43 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// int main(void)
// {
// 	int c;

// 	c = 0;
// 	while (c <= 127)
// 	{
// 		printf("%c = %d\n", c, ft_isalpha(c));
// 		c++;
// 	}
// 	return (1);
// }