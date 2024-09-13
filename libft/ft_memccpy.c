/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:27:46 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/23 23:27:48 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		cuc;
	unsigned char		*dstc;
	const unsigned char	*srccc;
	size_t				i;

	cuc = (unsigned char)c;
	dstc = (unsigned char *)dst;
	srccc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srccc[i];
		if (srccc[i] == cuc)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
