/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:00:18 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/05 15:00:32 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1)
		{
			if (*s1++ != *s2++)
				return (0);
		}
		if (*s1 == *s2 && *s2 == '\0')
			return (1);
		return (0);
	}
	return (0);
}
