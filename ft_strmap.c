/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:05:01 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/05 15:05:08 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	if (!(new = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (*s)
	{
		new[i++] = (*f)(*s);
		s++;
	}
	new[i] = '\0';
	return (new);
}
