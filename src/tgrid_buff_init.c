/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_buff_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:27:17 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:27:23 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris_grid.h"
#include "libft.h"

char	*tgrid_buff_init(int size)
{
	char	*iter;
	char	*buff;

	buff = ft_strnew(size * size + size);
	iter = buff;
	if (buff)
	{
		ft_memset(buff, '.', size * size + size);
		while (*iter)
		{
			iter += size;
			*iter = '\n';
			iter++;
		}
	}
	return (buff);
}
