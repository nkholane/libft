/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 02:57:32 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/22 05:59:09 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word(char const *str, char c)
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

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
    size_t	j;
    size_t	k;
	size_t	sp;
    char	**result;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	sp = ft_word(s, c);
	if (!(result = (char**)malloc(sizeof(char*) * (sp + 1))))
		return (NULL);
	while (s[i] && s[i] == c)
	{
		i++;
		k = i;
		while (s[i] && s[i] != c)
			{
				i++;
				result[j] = ft_strsub(s, k, i - k);
				i++;
			}
		result[j] = NULL;
	}
	return (result);
}
