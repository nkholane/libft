/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:09:40 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/22 05:51:04 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int diff;

	i = 0;
	diff = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && (i < n - 1))
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
