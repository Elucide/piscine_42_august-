/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:32:50 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/15 20:19:37 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>


void	ft_putchar(char c);
void	print_line(int *line);
void	print_grid(int grid[4][4]);
int	check_rneuf(int y, int rules[16], int grid[4][4]);
int	check_col(int x, int rules[16], int grid[4][4]);
int	check_co(int x, int rules[16], int grid[4][4]);
int	check_rcol(int x, int rules[16], int grid[4][4]);
int check_line(int y, int rules[16], int grid[4][4]);
int	l_rule(int x);
int	c_rule(int y);
int	rule_two(int rule);
int backtrack(int x, int y, int grid[4][4], int rules[16], int nb);
int	*convert_rules(char *rules_in);
int ft_strlen(char *str);
int check_repeat(int a, int b, int c, int d, int nb);
int	test_one_four(int x, int nb, int rule_a, int rule_b);
int sight(int rules[16], int nb, int grid[4][4], int x, int y);
int test_case(int x, int y, int nb, int rules[16], int grid[4][4]);

#endif
