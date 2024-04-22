/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:57:13 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/19 12:01:04 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getwords(char const *s, size_t *start, char charsep)
{
	size_t	len;
	char	*result;

	len = 0;
	while (s[*start] == charsep && s[*start + len])
		(*start)++;
	while (s[*start + len] != charsep && s[*start + len])
		len++;
	result = ft_substr(s, *start, len);
	(*start) += len;
	return (result);
}

size_t	ft_count_words(char const *s, char charsep)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	if (s[0] == '\0')
		return (1);
	while (*s)
	{
		if (*s != charsep && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*s == charsep)
			trigger = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char		**splited;
	size_t		start;
	size_t		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	start = 0;
	i = 0;
	splited = malloc(sizeof(char *) * words + 1);
	if (!splited)
		return (NULL);
	if (s[0] == '\0')
	{
		splited[0] = NULL;
		return (splited);
	}
	while (i < words)
	{
		splited[i] = ft_getwords(s, &start, c);
		i++;
	}
	splited[i] = NULL;
	return (splited);
}
// int	main(void)
// {
// 	int i;
// 	char **tab;

// 	tab = ft_split("    dlmf s   smkgfms gkms gmm sgk    ", 'z');
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }