/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:07:15 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/15 21:54:08 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	l_rule(int x)
{
	return (x + 8);
}

int	c_rule(int y)
{
	return (y);
}

int	rule_two(int rule)
{
	int	out;

	if ((rule >= 0 && rule <= 4) || (rule >= 8 && rule <= 11))
		return (rule + 4);
	else
		return (rule - 4);
}

int backtrack(int x, int y, int grid[4][4], int rules[16], int nb)
{
	if (grid[y][x] > 0)
		return (backtrack(x + 1, y, grid, rules, nb));
	if (x == 4 && y == 3)
	{
		if (!check_col(0, rules, grid))
			return (0);
		if (!check_col(1, rules, grid))
			return (0);
		if (!check_col(2, rules, grid))
			return (0);
		if (!check_col(3, rules, grid))
			return (0);
		return (1);
	}
	if (x == 4)
	{
		printf("cl %d\n",check_line(y, rules, grid));
		if (check_line(y, rules, grid))
		{
			printf("ligne bonne");
			x = 0;
			y++;
			return (backtrack(x, y, grid, rules, 1));
		}
		printf("ligne mauvaise");
		return (0);
	}
	if (grid[y][x] == 0)	
	{	
		while (nb <= 4)
		{
			grid[y][x] = nb;
			print_grid(grid);
			printf("\n");
			if (backtrack(x, y, grid, rules, nb + 1))
			{
				printf("COUCOU	%d %d %d\n", x, y , nb);
				return (1);
			}
			grid[y][x] = 0;
			nb++;
		}
	}
	grid[y][x] = 0;
	return (0);
}

int main(void)
{
	int str[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	int grid[4][4] = {0};
	printf("%d", backtrack(0, 0, grid, str, 1));
}
