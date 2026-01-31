/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:32:53 by agaspary          #+#    #+#             */
/*   Updated: 2026/01/28 14:52:11 by agaspary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dbuffer)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = 0;
	while (dest[i] && i < dbuffer)
		i++;
	dlen = i;
	while (i + 1 < dbuffer && src[slen])
		dest[i++] = src[slen++];
	if (i < dbuffer)
		dest[i] = '\0';
	while (src[slen])
		slen++;
	return (dlen + slen);
}
