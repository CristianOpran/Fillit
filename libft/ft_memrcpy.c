/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:57:00 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:47:26 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memrcpy(void *dst, const void *src, size_t n)
{
	t_byte		*m_ptr;
	t_byte		*v_ptr;

	m_ptr = (t_byte *)dst + n - 1;
	v_ptr = (t_byte *)src + n - 1;
	while (n)
	{
		*m_ptr = *v_ptr;
		--m_ptr;
		--v_ptr;
		--n;
	}
	return (dst);
}
