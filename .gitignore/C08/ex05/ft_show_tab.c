/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:13:30 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/25 19:27:52 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	out;

	out = 0;
	if (nb < 0)
	{
		out = nb * -1;
		ft_putchar('-');
	}
	else
		out = nb;
	if (out >= 0 && out <= 9)
		ft_putchar(out + '0');
	else
	{
		ft_putnbr(out / 10);
		ft_putnbr(out % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].len);
		write (1, "\n", 1);
		ft_putstr(par[i].cpy);
		i++;
	}
}
