/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspary <agaspary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:52:27 by agaspary          #+#    #+#             */
/*   Updated: 2026/02/04 15:47:06 by agaspary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_freememory(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;
	char	**result;

	if (!s)
		return (NULL);
	count = ft_wordcount(s, c);
	result = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		len = ft_wordlen(s, c);
		result[i] = ft_substr(s, 0, len);
		if (!result[i])
			return (ft_freememory(result), NULL);
		s += len;
		i++;
	}
	return (result);
}

/*
int	main(void)
{
	char	text[] = "___National_Polytechinc_University_of_Armenia";
	char	t;
	char	**ptr;

	t = '_';
	ptr = ft_split(text, t);
	if (ptr == NULL)
		return (0);
	for (int i = 0; ptr[i]; i++)
	{
		for (int j = 0; ptr[i][j]; j++)
		{
			printf("%c", ptr[i][j]);
		}
		printf("\n");
	}
}
*/
