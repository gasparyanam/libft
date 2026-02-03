/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:41:43 by agaspary          #+#    #+#             */
/*   Updated: 2026/02/01 20:45:34 by agaspary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*p;

	size = ft_strlen(str) + 1;
	p = (char *)malloc(size);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, str, size);
	return (p);
}
