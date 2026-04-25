/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:43:37 by fraigles          #+#    #+#             */
/*   Updated: 2026/04/25 21:34:05 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	aux;
	int	sign;

	aux = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
		sign = -1;
	}
	else if (!(*nptr >= 48 && *nptr <= 57))
		return (0);
	else
		aux = (aux * 10) + (*nptr - 48);
	nptr++;
	while (*nptr >= 48 && *nptr <= 57)
	{
		aux = (aux * 10) + (*nptr - 48);
		nptr++;
	}
	return (aux * sign);
}
