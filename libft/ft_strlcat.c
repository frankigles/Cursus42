/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraigles <fraigles@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:59:22 by fraigles          #+#    #+#             */
/*   Updated: 2026/04/25 17:46:58 by fraigles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;
	size_t	x;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0)
		return (src_len);
	i = 0;
	x = dst_len;
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] && (dst_len + i + 1 < size))
	{
		dst[x] = src[i];
		x++;
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}

/*int    main(void)
{
	char        dst[15] = "";
	const char    src[12] = " como estas";
	size_t	dev =  ft_strlcat(dst, "lorem ipsum dolor sit amet", 15);
	return (0);
}*/