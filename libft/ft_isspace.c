/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 12:20:34 by ardurand          #+#    #+#             */
/*   Updated: 2017/01/18 14:26:19 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (ft_blank(c) != -1)
		return (c);
	else if (c == '\r')
		return (c);
	else if (c == '\v')
		return (c);
	else if (c == '\f')
		return (c);
	return (-1);
}
