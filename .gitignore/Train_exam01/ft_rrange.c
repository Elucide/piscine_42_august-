/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:20:03 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/21 19:42:00 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int *ft_rrange(int start, int end)
{
	int index = 0;
	int sens = 1;
	int *out;
	if (start > end)
		sens = -1;
	int len = (end - start + 1) * sens;
	printf("len %d\n", len);
	out = malloc(sizeof(int) * len + 1);
	while (out[index] != end) 
	{
		out[index] = start + (index * sens);
		printf("index %d\nout: %d\n", index, out[index]);
		index++;

	}
	return(out);
}



int main()
{
	int *tab = ft_rrange(-2, 2);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	printf("%d\n", tab[4]);
}
