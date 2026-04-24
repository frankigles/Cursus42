/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:34:14 by fraigles          #+#    #+#             */
/*   Updated: 2026/04/24 17:34:14 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	aux;
	int	flag;

	aux = 0;
	flag = 0;
	while(*nptr)
	{
		if(*nptr == 32)
			nptr++;
		if(*nptr == 43 || *nptr == 45)
		{
			if( *nptr == 45)
				flag = 1;
		}
		if(*nptr >=48 && *nptr <= 57)
		{
			aux = aux *10;
			aux =  aux + (*nptr -48);
		}
		nptr++;
	}
	if(flag == 1)
	aux = aux * - 1;
	return (aux);
}
