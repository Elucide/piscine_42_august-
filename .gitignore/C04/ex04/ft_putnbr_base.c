/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:02:50 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/19 17:07:23 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len_base;

	len_base = ft_strlen(base);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || len_base <= 1)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	out;
	unsigned int	len_base;

	len_base = ft_strlen(base);
	out = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			out = nbr * -1;
			ft_putchar('-');
		}
		else
			out = nbr;
		if (out >= 0 && out <= len_base - 1)
			ft_putchar(base[out]);
		else
		{
			ft_putnbr_base(out / len_base, base);
			ft_putnbr_base(out % len_base, base);
		}
	}
}
