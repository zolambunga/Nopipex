/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:27:06 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/23 23:27:08 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/*
** void	main(void)
** {
** 	char nome[] = "amet";
**
** 	printf("%s\n", (unsigned char *)ft_memset(nome, '#', 5));
** 	printf("%s\n", (unsigned char *)memset(nome, '#', 5));
** }
*/
