/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:54:56 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/14 12:19:55 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 2;
	}
	return (*s1 - *s2);
}

/*int		main(void)
{
	char str1[15];
	char str2[15];
	int ret;

	ft_strcpy(str1, "ababababab");
	ft_strcpy(str2, "ababababaub");

	ret = ft_strcmp(str1, str2);

	if(ret < 0) 
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0)
	{
		printf("str2 is less than str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return(0);
}*/
