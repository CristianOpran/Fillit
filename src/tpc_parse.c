/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tpc_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:31:22 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:31:24 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris_grid.h"
#include "tetris_piece.h"

t_tpc	tpc_parse(char *s)
{
	t_pointc	rl;
	t_tpc		np;
	char		*i;

	np = INL_TPC_INIT;
	rl = INL_POINTC_INIT;
	i = np.os;
	while (i < (np.os + 8) && *s)
	{
		if (*s == '\n' && i != np.os)
		{
			rl.x -= 5;
			rl.y++;
		}
		if (*s++ == '#')
		{
			i[0] = rl.x;
			i[1] = rl.y;
			rl = INL_POINTC_INIT;
			i += 2;
		}
		if (i != np.os)
			rl.x++;
	}
	return (np);
}
