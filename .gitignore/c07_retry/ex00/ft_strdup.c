/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:04:11 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/25 11:15:39 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*out;
	int		i;

	i = 0;
	while (src[i])
		i++;
	out = malloc(sizeof(char) * i + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		out[i] = src[i];
		i++;
	}
	out[i] = 0;
	return (out);
}
