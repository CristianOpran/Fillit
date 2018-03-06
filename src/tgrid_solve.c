/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_solve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:29:54 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:29:56 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris_grid.h"

void	tgrid_solve(t_tgrid *tg)
{
	int	i;
	int	res;

	i = 0;
	while (i < tg->n)
	{
		if (i < 0)
		{
			tgrid_resize(tg, tg->size + 1);
			i = 0;
		}
		if ((res = tgrid_place(tg, tg->gpos[i], tg->pieces[i], 'A' + i)) > 0)
			i++;
		else
		{
			tgrid_unplace(tg, tg->gpos[i], tg->pieces[i], 'A' + i);
			tg->gpos[i].x++;
			if (res == -3)
				tg->gpos[i--] = INL_POINTC_INIT;
			else if (res == -2)
				tg->gpos[i] = (t_pointc){0, tg->gpos[i].y + 1};
		}
	}
	write(1, tg->buff, tg->size * tg->size + tg->size);
}
