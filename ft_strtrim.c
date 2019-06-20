/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:17:51 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/20 11:26:20 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t		len;
	char		*new_str;
	size_t		start;

	start = 0;
	if (s == NULL)
		return (NULL);
	while (s[start] == '\n' || (s[start] == ' ' || s[start] == '\t'))
		start++;
	len = ft_strlen(s) - 1;
	while (len >= 0 && (s[len] == '\n' || s[len] == ' ' || s[len] == '\t'))
		len--;
	if (!(new_str = ft_strnew(len)))
		return (NULL);
	new_str = ft_strncpy(new_str, s, len + 1);
	new_str[len + 1] = '\0';
	return ((char*)new_str);
}

int		main(void)
{
	char trim[] = " trim this string for me ";
	char trim1[] = "   i *----*-     trim is this way   66**- 678      ";
	printf("trim string =>%s\n", ft_strtrim(trim));
	printf("trim string1 =>%s\n", ft_strtrim(trim1));
	return (0);
}