/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 13:26:21 by nkholane          #+#    #+#             */
/*   Updated: 2020/03/04 13:13:11 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	r_size(char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		if (*s && ft_isspace(*s))
			++s;
		else
		{
			++len;
			while (*s && !ft_isspace(*s))
				++s;
		}
	}
	return (len);
}

char		**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		w_len;
	char	**ret;

	j = 0;
	w_len = 0;
	ret = (char **)malloc(sizeof(char *) * (r_size(str) + 1));
	while (str[i] && j < r_size(str))
	{
		while (str[i] && ft_isspace(str[i]))
			i++;
		while (str[i] && !ft_isspace(str[i]))
		{
			i++;
			w_len++;
		}
		k = 0;
		ret[j] = (char *)malloc(sizeof(char) * (w_len + 1));
		while (w_len)
			ret[j][k++] = str[i - w_len--];
		ret[j++][k] = '\0';
	}
	return (ret);
}
