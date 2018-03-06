/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 19:04:05 by mienache          #+#    #+#             */
/*   Updated: 2017/12/12 21:01:17 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*t;

	if (s && f)
	{
		i = 0;
		while (s[i])
			i++;
		if ((t = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			t[i] = f(s[i]);
			i++;
		}
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}
