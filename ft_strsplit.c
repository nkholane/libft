/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:17:07 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/21 13:38:27 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word(char const *str, char c)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		if (str[i] != c)
		{ 
			i++;
			while (str[i] && str[i] != c)
				str++;
		}
		str++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t    i;
    size_t    j;
    size_t    k;
    char    **result;

    i = 0;
    j = 0;
    if (s == NULL)
        return (NULL);
    if (!(result = (char **)malloc(sizeof(char *)* (word(s, c) + 1))))
        return (NULL);
    while (s[i])
    {
        while (s[i] == c)
            i++;
        k = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > k)
            result[j++] = ft_strsub(s, k, i - k);
    }
    result[j] = NULL;
    return (result);
}
