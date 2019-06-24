/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:56:08 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/05 13:02:34 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
  {
      int res;
      int sign;
      int i;
 
      res = 0;
      sign = 0;
      i = 0;
 
      while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
          i++;
      if (str[i] == '-')
          sign = 1;
      if (str[i] == '+' || str[i] == '-')
          i++;
 
          while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
          {
              res = res * 10;
              res += (int)str[i] - '0';
              i++;
          }
          if (sign == 1)
             return (-res);
          else
             return (res);
  }