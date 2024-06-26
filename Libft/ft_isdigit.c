/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:08:46 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/03 08:44:49 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
// int main(void)
// {
// 	int c;

// 	c = 0;
// 	while (c <= 127)
// 	{
// 		printf("%c = %d\n", c, ft_isdigit(c));
// 		c++;
// 	}
// 	return (1);
// }