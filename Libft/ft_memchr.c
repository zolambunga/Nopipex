/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:27:38 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/23 23:27:40 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = s;
	unsigned char		uc;

	uc = (unsigned char)c;
	while (n-- > 0)
	{
		if (*p == uc)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hello, world!";
	char		ch;
	size_t		len;
	char		*result;

	// String para teste
	ch = 'w';
	// Tamanho da string
	len = sizeof(str);
	// Usar memchr para procurar pelo caractere 'w' na string
	result = ft_memchr(str, ch, len);
	if (result != NULL)
	{
		printf("Caractere '%c' encontrado na posição: %ld\n", ch, result - str);
	}
	else
	{
		printf("Caractere '%c' não encontrado.\n", ch);
	}
	return (0);
}
*/