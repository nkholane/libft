/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:09:40 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/13 17:32:10 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*int		main(void)
{
   char str1[100];
   char str2[100];
   int ret;

   strcpy(str1, "****----wethinkcode");
   strcpy(str2, "****----wethinkcode");

   ret = ft_strncmp(str1, str2, 50);

   if(ret < 0)
   {
      printf("str1 is less than str2\n");
   } 
   else if(ret > 0)
   {
      printf("str2 is less than str1\n");
   } 
   else 
   {
      printf("str1 is equal to str2\n");
   }  
   return(0);
}*/
