/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:53:47 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 03:05:43 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	*ft_vec_move(t_vector *v)
{
	t_vector	*new_vec;

	new_vec = ft_memalloc(sizeof(t_vector));
	new_vec->step = v->step;
	new_vec->size = v->size;
	new_vec->count = v->count;
	new_vec->data = v->data;
	v->size = T_VECTOR_INIT_SIZE;
	v->count = 0;
	v->data = ft_memalloc(v->step * v->size);
	return (new_vec);
}
