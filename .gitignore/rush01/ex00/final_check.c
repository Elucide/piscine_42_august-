/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:45:18 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/15 21:13:44 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int check_line(int y, int rules[16], int grid[4][4])
{
	printf("check line\n");
	if (check_rneuf(y, rules, grid) && (check_rline(y, rules, grid)))
		return (1);
	printf("ligne pa bonne\n");
	return (0);
}
int check_col(int x, int rules[16], int grid[4][4])
{
	if (!check_co(x, rules, grid))
		return (0);
	if (!check_rcol(x, rules, grid))
		return (0);
	return (1);
}
