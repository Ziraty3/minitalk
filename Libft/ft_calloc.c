/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:11:32 by ziratya           #+#    #+#             */
/*   Updated: 2023/10/23 16:59:30 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = (void *)malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
