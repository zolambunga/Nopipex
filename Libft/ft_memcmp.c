/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:27:32 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/24 02:46:23 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1 = (const unsigned char *)s1;
	const unsigned char	*ss2 = (const unsigned char *)s2;

	while (n-- > 0)
	{
		if (*ss1 != *ss2)
		{
			return (*ss1 - *ss2);
		}
		ss1++;
		ss2++;
	}
	return (0);
}
/*
** int	main(void)
** {
** 	char	buffer1[] = "ZoLa Mbunga";
** 	char	buffer2[] = "ZoLa Mbunga";
** 	int		resultado;
** 	int		resultado2;
** 
** 	resultado = ft_memcmp(buffer1, buffer2, sizeof(buffer1));
** 	resultado2 = memcmp(buffer1, buffer2, sizeof(buffer1));
** 	if (resultado == 0)
** 		printf("O resultado é %d, s1 é igual a s2\n", resultado);
** 	if (resultado < 0)
** 		printf("O resultado é %d, s1 é menor que s2\n", resultado);
** 	if (resultado > 0)
** 		printf("O resultado é %d, s1 é maior que s2\n", resultado);
** 
** 	if (resultado == 0)
** 		printf("Original: resultado é %d, s1 é igual a s2\n", resultado2);
** 	if (resultado < 0)
** 		printf("Original: resultado é %d, s1 é menor que s2\n", resultado2);
** 	if (resultado > 0)
** 		printf("Original: resultado é %d, s1 é maior que s2\n", resultado2);
** 
** 	return (0);
** }
*/