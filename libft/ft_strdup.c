/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 12:13:22 by ardurand          #+#    #+#             */
/*   Updated: 2017/10/12 18:05:33 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(*new_str) * (ft_strlen(src) + 1));
	if (new_str == NULL)
		return (NULL);
	return (ft_strcpy(new_str, src));
}
