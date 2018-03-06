/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:53:04 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:04:56 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vec_append(t_vector *v, void *data)
{
	if (v->count >= v->size)
		ft_vec_resize(v, v->size * 2);
	ft_memmove(v->data + v->count * v->step, data, v->step);
	v->count++;
}
