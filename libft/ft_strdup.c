/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:03:38 by mienache          #+#    #+#             */
/*   Updated: 2017/12/12 19:39:10 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(s) + 1;
	if ((dest = (char*)malloc(sizeof(char) * i)))
	{
		ft_strcpy(dest, s);
		return (dest);
	}
	return (NULL);
}
