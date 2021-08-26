/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:22:56 by yschecro          #+#    #+#             */
/*   Updated: 2021/08/25 19:23:19 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define	EVEN(nbr) (nbr % 2 == 0)
# define	TRUE 1
# define	FALSE 0
# define	EVEN_MSG "I have an even number of arguments.\n"
# define	ODD_MSG "I have an odd number of arguments.\n"
# define	SUCCES 1
typedef int	t_bool;
#endif
