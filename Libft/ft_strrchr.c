/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:36:56 by fraigles          #+#    #+#             */
/*   Updated: 2026/04/24 16:36:56 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *ptr;

	ptr = 0;
	while (*s)
	{
		if (*s == (char)c)
			*ptr = *s;
		s++;
		if(*s == '\0')
			return (ptr);
	}
	if(c == '\0')
		return (ptr);
	return (NULL);
}