/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:56:05 by mienache          #+#    #+#             */
/*   Updated: 2017/12/12 21:02:33 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;
	void			*y;

	x = (unsigned char *)src;
	y = (void *)src;
	i = 0;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return (y + i);
		i++;
	}
	return (NULL);
}
