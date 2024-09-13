/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zombunga <zombunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 23:29:05 by zombunga          #+#    #+#             */
/*   Updated: 2024/05/24 08:26:20 by zombunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_estim(long n)
{
	int	estim;

	estim = 0;
	if (n < 0)
	{
		estim++;
		n = -n;
	}
	while (n > 0)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}

static char	*ft_gen(char *result, long nbr, int len)
{
	if (nbr == 0)
		return (ft_strdup("0"));
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (--len >= 0 && nbr > 0)
	{
		result[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	nbr;

	nbr = n;
	if (nbr == 0)
		return (ft_strdup("0"));
	len = ft_estim(nbr);
	result = ft_gen(NULL, nbr, len);
	return (result);
}
