/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 02:07:11 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:44:23 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector		*ft_vec_new(size_t step)
{
	t_vector	*new_vec;

	new_vec = (t_vector *)ft_memalloc(sizeof(t_vector));
	new_vec->step = step;
	new_vec->size = T_VECTOR_INIT_SIZE;
	new_vec->count = 0;
	new_vec->data = ft_memalloc(new_vec->size * new_vec->step);
	return (new_vec);
}
