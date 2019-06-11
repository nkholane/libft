/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:17:51 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/05 15:17:54 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t		len;
	char		*new_str;

	while (*s && (*s == ' ' || *s == '\t'))
		s++;
	len = ft_strlen(s);
	while (*s && (s[--len] == ' ' || s[--len] == '\t'))
		;
	if (!(new_str = ft_strnew(len)))
		return (NULL);
	new_str = ft_strncpy(new_str, s, len + 1);
	new_str[len + 1] = '\0';
	return ((char*)new_str);
}
