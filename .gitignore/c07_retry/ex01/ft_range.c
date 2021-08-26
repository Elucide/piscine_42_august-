/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:09:49 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/24 16:19:32 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*out;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	out = malloc(sizeof(int) * len);
	if (out == NULL)
		return (NULL);
	while (i < len)
	{
		out[i] = min + i;
		i++;
	}
	return (out);
}
