/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:09:11 by mienache          #+#    #+#             */
/*   Updated: 2017/12/12 21:10:13 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*muie;

	if (len == 0)
		return (b);
	muie = (unsigned char *)b;
	while (len--)
	{
		*muie = (unsigned char)c;
		if (len)
			muie++;
	}
	return (b);
}
