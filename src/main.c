/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 01:26:29 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 01:26:43 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "tetris_grid.h"
#include "libft.h"

static int	lastcheck(int i, int bcount, int rd)
{
	if (bcount != 4)
		return (0);
	if (i != rd)
		return (0);
	return (1);
}

static int	errorcheck(char *buf, int rd)
{
	int		i;
	int		bcount;

	i = 0;
	bcount = 0;
	while (buf[i])
	{
		if ((i % 21) % 5 == 4 && buf[i] != '\n')
			return (0);
		else if (i % 21 == 20)
		{
			if (buf[i] != '\n' || bcount != 4)
				return (0);
			bcount = 0;
		}
		else if ((i % 21) % 5 != 4)
		{
			if (buf[i] != '.' && buf[i] != '#')
				return (0);
			if (buf[i] == '#')
				bcount++;
		}
		i++;
	}
	return (lastcheck(i, bcount, rd));
}

static int	read_file(int argc, char const **argv, char *buff)
{
	int	rd;
	int	file;

	if (argc != 2)
	{
		write(1, "Usage: ./fillit [ somefile... ]\n", 32);
		exit(EXIT_FAILURE);
	}
	file = open(argv[1], O_RDONLY);
	if (file < 0)
	{
		write(1, "ERROR: Could not open file.\n", 28);
		exit(EXIT_FAILURE);
	}
	ft_memset(buff, 0, 4097);
	rd = read(file, buff, 4096);
	close(file);
	if (rd < 20 || rd > 545 || rd % 21 != 20 || !errorcheck(buff, rd))
	{
		write(1, "error\n", 6);
		exit(EXIT_FAILURE);
	}
	return (rd);
}

static int	nearestsquare_next(int n)
{
	int	i;

	i = 2;
	while (i * i < n)
		i++;
	return (i);
}

int			main(int argc, char const **argv)
{
	t_tgrid	tg;
	char	buff[4097];
	int		rd;

	rd = read_file(argc, argv, buff);
	tg = tgrid_init();
	tgrid_read_pieces(&tg, buff, rd / 21 + 1);
	if (!tgrid_validate_pieces(&tg))
	{
		write(1, "error\n", 6);
		exit(EXIT_FAILURE);
	}
	tg.size = nearestsquare_next(tg.n * 4);
	tg.buff = tgrid_buff_init(tg.size);
	tgrid_solve(&tg);
	return (0);
}
