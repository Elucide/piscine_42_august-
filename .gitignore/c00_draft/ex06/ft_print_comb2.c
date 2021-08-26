/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:46:26 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/09 22:20:54 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nu(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}

void	print_mult_nu(int n1, int n2)
{
	print_nu(n1);
	write (1, " ", 1);
	print_nu(n2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i != j)
			{
				print_mult_nu(i, j);
				if (!(i == 98 && j == 99))
					write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
