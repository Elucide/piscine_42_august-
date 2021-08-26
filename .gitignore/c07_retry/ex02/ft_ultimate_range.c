/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:39:21 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/24 18:34:29 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (range == NULL)
		return (-1);
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}
