/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_unplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:30:22 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:30:24 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris_grid.h"

void	tgrid_unplace(t_tgrid *tg, t_pointc guess, t_tpc pc, char id)
{
	char	*s;

	s = pc.os;
	while (s - pc.os < 8)
	{
		guess.x += s[0];
		guess.y += s[1];
		if (guess.x < 0 || guess.x >= tg->size || guess.y >= tg->size
			|| *INL_TGRID_P(tg, guess) != id)
			return ;
		*INL_TGRID_P(tg, guess) = '.';
		s += 2;
	}
}
