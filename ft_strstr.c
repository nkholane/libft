/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:07:04 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/10 16:43:59 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0' || needle == NULL)
		return ((char*)haystack);
	while (*haystack)
	{
		if (*haystack == *needle && ft_strcmp(haystack, needle))
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
