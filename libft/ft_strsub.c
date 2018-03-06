/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:06:25 by mienache          #+#    #+#             */
/*   Updated: 2017/12/12 19:40:40 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_s;

	new_s = (char *)malloc(sizeof(char) * len + 1);
	if (!new_s)
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(new_s, s, len);
	new_s[len] = '\0';
	return (new_s);
}
