/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:40:27 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/16 18:53:29 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	n = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[n] != '\0')
	{
		i = 0;
		while (to_find[i] != '\0' && str[n + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (str + n);
			i++;
		}
		n++;
	}
	return (0);
}
