/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:06:12 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/05 15:29:23 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int len;
  int i;

  len = -1;
  while (s1[++len])
  i = 0;
  while (i < n)
  {
    s1[len] = s2[i];
    i++;
    len++;
  }
  s1[len] = '\0';

  return (s1);
}
