/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkline.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:34:02 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/15 21:20:51 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"


int	check_rneuf(int y, int rules[16], int grid[4][4])
{
	int	rule;
	int	i;
	int	temp;
	int	count;

	count = 1;
	i = 0;
	temp = grid[y][i];
	rule = rules[l_rule(y)];
	while (i < 4)
	{
		printf("reconnaissable %d\n", temp);
		if (temp < grid[y][i + 1])
		{
			temp = grid[y][i + 1];
			count ++;
		}
		i++;
	}
	printf("testligne\n");
	if (rule == count)
		return (1);
	return (0);
}

int	check_rline(int y, int rules[16], int grid[4][4])
{
	int	rule;
	int	i;
	int	temp;
	int	count;

	count = 1;
	i = 3;
	temp = grid[y][i];
	rule = rules[rule_two(l_rule(y))];
	while (i >= 0)
	{
		if (temp < grid[y][i])
		{
			temp = grid[y][i];
			count ++;
		}
		i--;
	}
	printf("testligner\n");
	if (rule == count)
		return (1);
	return (0);
}

int	check_co(int x, int rules[16], int grid[4][4])
{
	int	rule;
	int	i;
	int	temp;
	int	count;

	count = 1;
	temp = grid[i][x];
	i = 0;
	rule = rules[c_rule(x)];
	while (i < 4)
	{
		if (temp < grid[i + 1][x])
		{
			temp = grid[i + 1][x];
			count ++;
		}
		i++;
	}
	if (rule == count)
		return (1);
	return (0);
}

int	check_rcol(int x, int rules[16], int grid[4][4])
{
	int	rule;
	int	i;
	int	temp;
	int	count;

	count = 1;
	temp = grid[i][x];
	i = 3;
	rule = rules[rule_two(c_rule(x))];
	while (i >= 0)
	{
		if (temp < grid[i - 1][x])
		{
			temp = grid[i - 1][x];
			count ++;
		}
		i--;
	}
	if (rule == count)
		return (1);
	return (0);
}
