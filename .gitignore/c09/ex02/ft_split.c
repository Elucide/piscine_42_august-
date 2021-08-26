/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:01:45 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/26 11:25:30 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == 0)
		return (0);
	while (str[i])
	{
		while (ft_is_charset(str[i], charset) == 1 && str[i])
			i++;
		if (ft_is_charset(str[i], charset) == 0 && str[i])
		{
			while (ft_is_charset(str[i], charset) == 0 && str[i])
				i++;
			count++;
		}
	}
	return (count);
}

char	*ft_strndup(char *str, int size)
{
	int		i;
	char	*out;

	out = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i] && str[i] && i < size)
	{
		out[i] = str[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	**ft_return(char **out)
{
	out[0] = 0;
	return (NULL);
}

char	**ft_split(char *str, char *charset)
{
	char	**out;
	int		i;
	int		j;
	int		size;

	size = ft_is_word(str, charset);
	i = 0;
	j = 0;
	out = malloc(sizeof(char *) * (size + 1));
	if (out == NULL)
		return (ft_return(out));
	while (j < size)
	{
		while (ft_is_charset(str[i], charset) == 1 && str[i])
			i++;
		str += i;
		i = 0;
		while (ft_is_charset(str[i], charset) == 0 && str[i])
			i++;
		out[j++] = ft_strndup(str, i);
		str += i;
		i = 0;
	}
	out[j] = 0;
	return (out);
}


