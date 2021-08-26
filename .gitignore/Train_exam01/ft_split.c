/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:05:04 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/25 12:02:20 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int is_letter(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f' 
			|| c == ' ')
		return (0);
	return (1);
}

int calc_len(char *str)
{
	int i = 0;
	while (str[i])
	{
		i += is_letter(str[i]);
	}
	return (i);
}

char **ft_split(char *str)
{
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;
	int len = calc_len(str);
	char **out;
	out = malloc(sizeof(char *) * len);
	if (out == NULL)
		return (NULL);
	while (str[i])
	{
		while (!is_letter(str[i]))
			i++;
		while (is_letter(str[i]))
		{
			i++;
			j++;
		}
		y = 0;
		while (j)
			out[x][y++] = str[i - j--];
		out[x++][y] = '\0';
	}
	return (out);
}

#include <stdio.h>
int main()
{
	char **split = ft_split("Coucou les potes wesh");
	printf("%s", split[0]);
	printf("%s", split[1]);
	printf("%s", split[2]);
	printf("%s", split[3]);
}
#ifndef FT_SPLIT_C
# define FT_SPLIT_C

#endif
