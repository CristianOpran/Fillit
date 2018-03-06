/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_read_pieces.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:28:12 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:28:15 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris_grid.h"
#include "libft.h"

void	tgrid_read_pieces(t_tgrid *tg, char *fb, int n)
{
	char	*iter;
	t_tpc	*i;

	tg->pieces = ft_memalloc(sizeof(t_tpc) * n);
	i = tg->pieces;
	tg->n = n;
	tg->gpos = ft_memalloc(sizeof(t_pointc) * tg->n);
	while (*fb)
	{
		iter = fb;
		*i = tpc_parse(iter);
		fb += 21;
		i++;
	}
}
