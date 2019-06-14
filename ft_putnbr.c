/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkholane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 15:42:26 by nkholane          #+#    #+#             */
/*   Updated: 2019/06/14 15:51:59 by nkholane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (!n)
		return ;
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n); // n = n * -1;
	}
	if (n > 9)
	{
	ft_putnbr(n / 10);
	ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}
