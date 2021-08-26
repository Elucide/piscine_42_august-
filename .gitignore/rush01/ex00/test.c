/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 14:38:28 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/15 21:54:06 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int check_repeat(int grid[4][4], int nb, int x)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][x] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	test_one_four(int x, int nb, int rule_a, int rule_b)
{
	if (rule_a == 1 && rule_b == 4 && (nb + x != 4))
		return (0);
	if (rule_a == 4 && rule_b == 1 && (nb - x != 1))
		return (0);
	return (1);
}

int sight(int rules[16], int nb, int grid[4][4], int x, int y)
{

}

int test_case(int x, int y, int nb, int rules[16], int grid[4][4])
{
	if (!check_repeat(grid[y], nb))
		return (0);
	if (!check_repeat(grid[0][x], grid[1][x], grid[2][x], grid[3][x], nb))
		return (0);
	if (!test_line(l_rule(x, y), rule_two(l_rule(x, y)), nb, x))
		return (0);	
	if (!test_line(c_rule(x, y), rule_two(c_rule(x, y)), nb, y))
		return (0);
	if (!test_one_four(x, nb, l_rule(x, y), rule_two(l_rule(x, y)))
		return (0);	
	if (!test_one_four(y, nb, c_rule(x, y), rule_two(c_rule(x, y)))
		return (0);
	return (1);
}
