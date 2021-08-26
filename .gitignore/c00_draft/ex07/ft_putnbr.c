/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:58:46 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/09 22:20:19 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
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
