/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_generic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:51:34 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:04:32 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_generic(const char *str, size_t base, const char *format)
{
	int		sign;
	int		val;

	sign = 1;
	val = 0;
	while (ft_isspace(*str))
		++str;
	if (*str == format[0] || *str == format[1])
	{
		if (*str == format[0])
			sign = -1;
		++str;
	}
	while (ft_memchr(&format[2], *str, base) && *str)
	{
		val *= base;
		val += sign * ((char *)ft_memchr(&format[2], *str, base) - &format[2]);
		++str;
	}
	return (val);
}
