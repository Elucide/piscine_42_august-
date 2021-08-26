/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 10:59:06 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/15 20:20:05 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(int *line)
{
	int		x;

	x = 0;
	while (x != 4)
	{
		ft_putchar(line[x] + '0');
		if (x != 3)
			write(1, " ", 1);
		x++;
	}
	write(1, "\n", 1);
}

void	print_grid(int grid[4][4])
{
	int	y;

	y = 0;
	while (y != 4)
	{
		print_line(grid[y]);
		y++;
	}
}
/*
int main()
{
	int grid[4][4] = {	{0,0,0,0},
						{0,0,0,0},
						{0,0,0,0},
						{0,0,0,0}};
	print_grid(grid);
}

*/
