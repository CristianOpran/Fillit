/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:54:44 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:05:51 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vec_pop_s(t_vector *v, void *store)
{
	ft_memmove(store, v->data + (v->count - 1) * v->step, v->step);
	ft_bzero(v->data + (v->count - 1) * v->step, v->step);
	(v->count)--;
}
