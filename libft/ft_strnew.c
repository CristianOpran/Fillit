/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:04:54 by mienache          #+#    #+#             */
/*   Updated: 2017/12/12 19:44:36 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t		i;
	char		*new_s;

	new_s = (char *)malloc(sizeof(char) * size + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_s[i] = '\0';
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
