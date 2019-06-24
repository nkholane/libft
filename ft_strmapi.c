/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:05:35 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/18 15:03:02 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (s != NULL)
	{
		new = (char *)(malloc(sizeof(char) * (ft_strlen(s)) + 1));
	i = 0;
	if (new == NULL)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}

unsigned int	i;
	char			*str;

	i = 0;
	if (s != NULL)
	{
		str = (char *)(malloc(sizeof(char) * (ft_strlen(s)) + 1));
		
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}if (s == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
