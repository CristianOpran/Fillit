/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_place.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:27:47 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:27:49 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris_grid.h"

int	tgrid_place(t_tgrid *tg, t_pointc guess, t_tpc pc, char id)
{
	char	*s;

	s = pc.os;
	while (s - pc.os < 8)
	{
		guess.x += s[0];
		guess.y += s[1];
		if (guess.x < 0)
			return (-1);
		if (guess.x >= tg->size)
			return (-2);
		if (guess.y >= tg->size)
			return (-3);
		if (*INL_TGRID_P(tg, guess) != '.')
			return (0);
		*INL_TGRID_P(tg, guess) = id;
		s += 2;
	}
	return (1);
}
