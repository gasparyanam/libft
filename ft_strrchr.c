/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:41:25 by agaspary          #+#    #+#             */
/*   Updated: 2026/01/30 18:28:12 by agaspary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*ptr != '\0')
		ptr++;
	while (ptr >= s)
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr--;
	}
	return (NULL);
}
