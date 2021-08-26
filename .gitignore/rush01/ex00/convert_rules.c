/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_rules.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:58:51 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/17 11:44:45 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* convert_rules convertit la chaine de caractere "rules" passee en parametre
 * et la convertit en un tableau d'entier.
 *
 * si le tableau peut permettre de remplir la grille, 
 * alors la fonction renvoie 1, si une erreur existe,
 * la fonction renvoie 0, au main de d'afficher le message d'erreur.
*/
#include <stdlib.h>

int	*convert_rules(char *rules_in)
{
	int	index_str;
	int	index_out;
	int	*out;

	index_str = 0;
	index_out = 0;
	out = malloc(sizeof(int) * 16);
	if (out == NULL)
		return (NULL);
	while (rules_in[index_str])
	{
		if (rules_in[index_str] == '1' || rules_in[index_str] == '2'
			|| rules_in[index_str] == '3' || rules_in[index_str] == '4')
		{
			out[index_out] = rules_in[index_str] - '0';
			index_out ++;
			index_str ++;
		}
		else
			return (NULL);
		if (rules_in[index_str] == ' ')
			index_str ++;
		else
			return (NULL);
	}
	return (out);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int tab[] = convert_rules(av[ac - 1]);
}

*/
