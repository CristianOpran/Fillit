/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_newn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:54:06 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:07:03 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	*ft_vec_newn(size_t step, size_t init_size)
{
	t_vector	*new_vec;

	new_vec = (t_vector *)ft_memalloc(sizeof(t_vector));
	new_vec->step = step;
	new_vec->size = init_size;
	new_vec->count = 0;
	new_vec->data = ft_memalloc(new_vec->size * new_vec->step);
	return (new_vec);
}
