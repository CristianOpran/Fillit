/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_grid.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:32:17 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 02:16:24 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRIS_GRID_H
# define TETRIS_GRID_H

# include "libft.h"
# include "tetris_point.h"
# include "tetris_piece.h"

struct	s_tgrid
{
	t_tpc		*pieces;
	t_pointc	*gpos;
	char		*buff;
	int			size;
	int			n;
};

typedef	struct s_tgrid	t_tgrid;

# define INL_IS_VALID(c) (c == '\n' || c == '#' || c == '.')
# define INL_TGRID_INIT (t_tgrid){NULL, NULL, NULL, 0, 0}
# define INL_TGRID_P(g, p) (char *)(g->buff + p.x + p.y * (g->size + 1))

t_tgrid	tgrid_init(void);

void	tgrid_solve(t_tgrid *tg);

char	*tgrid_buff_init(int size);

void	tgrid_resize(t_tgrid *tg, int nsize);

int		tgrid_place(t_tgrid *tg, t_pointc guess, t_tpc pc, char id);

void	tgrid_unplace(t_tgrid *tg, t_pointc guess, t_tpc pc, char id);

void	tgrid_read_pieces(t_tgrid *tg, char *file_buff, int n);

int		tgrid_validate_pieces(t_tgrid *tg);

#endif
