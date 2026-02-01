/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 12:44:39 by agaspary          #+#    #+#             */
/*   Updated: 2026/02/01 12:44:56 by agaspary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char* strdup(const char *src)
{
        int length;
        length = ft_strlen(src);

        char *dest;
        dest = (char*)malloc(sizeof(char) * (length + 1));
    
        if (dest == NULL)
                return (NULL);
        int i;
        i = 0;
        while (src[i])
        {
                dest[i] = src[i];
                i++;
        }

        dest[i] = '\0';
        return (dest);   
}


