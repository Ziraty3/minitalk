/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvalogne <gvalogne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:41:37 by gvalogne          #+#    #+#             */
/*   Updated: 2023/10/21 13:45:56 by gvalogne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(*newlst));
	if (!newlst)
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
