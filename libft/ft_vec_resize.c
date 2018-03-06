/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:54:56 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:05:56 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vec_resize(t_vector *v, size_t new_size)
{
	void	*new_data;

	new_data = ft_memalloc(new_size * v->step);
	if (new_size > v->size)
		ft_memcpy(new_data, v->data, v->size * v->step);
	else
	{
		ft_memcpy(new_data, v->data, new_size * v->step);
		v->count = new_size;
	}
	ft_memdel(&v->data);
	v->size = new_size;
	v->data = new_data;
}
