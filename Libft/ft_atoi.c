/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:04:26 by gvalogne          #+#    #+#             */
/*   Updated: 2023/12/28 14:47:20 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*nptr_c;
	int		result;
	int		i;
	int		neg;

	neg = 1;
	nptr_c = ((char *)nptr);
	result = 0;
	i = 0;
	while ((nptr_c[i] >= 9 && nptr_c[i] <= 13) || nptr_c[i] == 32)
		i++;
	if (nptr_c[i] == '-' || nptr_c[i] == '+')
	{
		if (nptr_c[i] == '-')
			neg = -1;
		i++;
	}
	while (nptr_c[i] >= 48 && nptr_c[i] <= 57)
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * neg);
}
// int	main(void)
// {
// 	char *test = "  	-2147483648@feh67es";

// 	printf("%i", ft_atoi(test));
// }