/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 22:14:09 by agaspary          #+#    #+#             */
/*   Updated: 2026/02/04 23:37:47 by agaspary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchar(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count = 2;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_copy(char *s, int count, long n)
{
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
		while (n)
		{
			s[--count] = n % 10 + '0';
			n /= 10;
		}
	}
	else
	{
		while (n)
		{
			s[--count] = n % 10 + '0';
			n /= 10;
		}
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;

	count = ft_countchar(n);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (n == 0)
		return (str[0] = '0', str);
	str = ft_copy(str, count, n);
	return (str);
}
