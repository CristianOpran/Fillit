/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_generic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:52:30 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:04:45 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_generic(long n, size_t b, size_t md, const char *fmt)
{
	size_t	digit_count;
	char	*num_string;
	char	*iter;

	digit_count = ft_count_digits(n, b);
	if (md > digit_count)
		digit_count = md;
	num_string = ft_strnew(digit_count);
	if (num_string)
	{
		ft_memset(num_string, fmt[1], digit_count);
		iter = num_string + digit_count - 1;
		if (n < 0)
			*num_string = fmt[0];
		while (n)
		{
			*iter = fmt[1 + (ft_abs(n) % b)];
			--iter;
			n /= (long)b;
		}
	}
	return (num_string);
}
