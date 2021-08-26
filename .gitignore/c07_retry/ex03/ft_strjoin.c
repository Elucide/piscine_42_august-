/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:17:54 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/25 11:19:05 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len(int	size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	j = 0;
	while (j < size)
	{
		len += ft_strlen(strs[j]);
		j++;
	}
	len += (size - 1) * ft_strlen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		i;
	int		len;

	out = NULL;
	len = ft_len(size, strs, sep);
	i = 0;
	if (size == 0)
		return (ft_strdup(""));
	out = malloc(sizeof(char) * (len + 1));
	if (out == NULL)
		return (NULL);
	out[0] = '\0';
	out[len] = '\0';
	while (i < size)
	{
		ft_strcat(out, strs[i]);
		if (i != size - 1)
			ft_strcat(out, sep);
		i++;
	}
	return (out);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i = ac;
	i++;
	printf("%s\n",  ft_strjoin(ac, av, "___"));
}
*/
