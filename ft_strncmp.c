/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:32:22 by agaspary          #+#    #+#             */
/*   Updated: 2026/02/01 13:29:38 by agaspary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lift.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if ((unsigned char)s1[1] != (unsigned char)s2[i])
			return ((unsigned char)s[i] - (unsigned char)s2[i]);
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
