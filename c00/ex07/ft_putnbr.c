/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmiki <yongmiki@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 20:53:40 by yongmiki          #+#    #+#             */
/*   Updated: 2021/03/29 21:04:40 by yongmiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char n;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, &"8", 1);
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		n = '0' + nb % 10;
		write(1, &n, 1);
	}
}