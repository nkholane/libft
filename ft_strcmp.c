/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:54:56 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/21 23:10:20 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i;
	unsigned int diff;

	i = 0;
	diff = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
		if (s1[i] != s2[i])
		{
			diff = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (diff);
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}