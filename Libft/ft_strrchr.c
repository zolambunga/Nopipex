/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:24:37 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/24 08:28:13 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*resultado;

	resultado = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			resultado = (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (resultado);
}
