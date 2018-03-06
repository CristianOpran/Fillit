/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris_point.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:32:52 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:32:54 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRIS_POINT_H
# define TETRIS_POINT_H

struct	s_char_point
{
	char	x;
	char	y;
};

typedef	struct s_char_point	t_pointc;

# define INL_POINTC_INIT (t_pointc) {0 , 0}
# define INL_POINTC_CPY(p) (t_pointc) {p.x, p.y}
# define INL_POINTC_ADD(a, b) (t_pointc) {a.x + b.x, a.y + b.y}
# define INL_POINTC_SUB(a, b) (t_pointc) {a.x - b.x, a.y - b.y}
# define INL_POINTC_MULT(a, b) (t_pointc) {a.x * b.x, a.y * b.y}
# define INL_POINTC_ISEQ(a, b) (a.x == b.x && a.y == b.y)

#endif
