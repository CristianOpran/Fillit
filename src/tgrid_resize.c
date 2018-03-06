/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_resize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:28:46 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:28:48 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris_grid.h"
#include "libft.h"

void	tgrid_resize(t_tgrid *tg, int nsize)
{
	char	*newbuff;

	newbuff = tgrid_buff_init(nsize);
	ft_memdel((void **)&(tg->buff));
	tg->buff = newbuff;
	tg->size = nsize;
}
