/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 20:17:41 by fraigles          #+#    #+#             */
/*   Updated: 2026/03/04 20:17:41 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while(n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}