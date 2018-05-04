/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 12:19:50 by ardurand          #+#    #+#             */
/*   Updated: 2017/01/19 16:17:10 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;
	void	*content_cpy;

	content_cpy = NULL;
	if (!content)
		content_size = 0;
	else
	{
		content_cpy = ft_memalloc(content_size);
		if (content_cpy == NULL)
			return (NULL);
		content_cpy = ft_memcpy(content_cpy, content, content_size);
	}
	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	{
		list->content = content_cpy;
		list->content_size = content_size;
		list->next = NULL;
		return (list);
	}
	return (NULL);
}
