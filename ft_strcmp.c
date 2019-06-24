/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:54:56 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/24 12:41:16 by nkholane         ###   ########.fr       */
/*   Updated: 2019/06/22 02:50:21 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if ((unsigned char)s1[i] - (unsigned char)s2[i] > 0)
		return (1);
	else if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
		return (-1);
	return (0);
}
