/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:27:15 by ziratya           #+#    #+#             */
/*   Updated: 2023/10/18 13:16:47 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		slen;

	slen = ft_strlen(s);
	i = 0;
	str = malloc(sizeof (char) * (slen + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char s[] = "Je suis une loutre";

// 	printf("%s",ft_strdup(s));
// }