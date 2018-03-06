/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:29:28 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:29:30 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris_grid.h"

t_tgrid	tgrid_init(void)
{
	t_tgrid	g;

	g.pieces = NULL;
	g.gpos = NULL;
	g.buff = NULL;
	g.n = 0;
	g.size = 0;
	return (g);
}
