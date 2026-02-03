/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:52:27 by agaspary          #+#    #+#             */
/*   Updated: 2026/02/03 16:18:35 by agaspary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	**ft_split(char const *s, char c)
{
		
}

int main()
{
	char text[] = "National_Polytechinc_University_of_Armenia";
	char t = '_';
	char **ptr = ft_split(text, t);
	for (int i = 0; &ptr[i]; i++)
	{
		for (int j = 0; ptr[i][j]; j++)
		{
			printf("%c", ptr[i][j]);
		}
		printf("\n");
	}
}
