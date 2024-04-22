/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:04:06 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/20 14:30:50 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			result[i] = f(i, s[i]);
			i++;
		}
	}
	result[i] = '\0';
	return (result);
}
