/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:41:22 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/15 18:00:42 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	*convert_rules(char *rules);
int	print_grid(int grid[4][4]);



int	error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	*rules;
	int	grid[4][4];
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argc != 2 && ft_strlen(argv[1]) != 32)
		return (error());
	rules = convert_rules(argv[1]);
	if (rules == NULL)
		return (error());
	grid = backtrack(x, y, grid, rules);
	free(rules);
	if (backtrack(x, y, grid, rules))
		print_grid(grid);
	else
		return(error());
}
