/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 23:23:05 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/12 10:43:45 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int a, int b)
{
	int	c;

	c = a;
	a = b;
	b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			ft_swap(tab[i], tab[i + 1]);
			ft_sort_int_tab(tab, size);
		}
		i++;
	}
}
