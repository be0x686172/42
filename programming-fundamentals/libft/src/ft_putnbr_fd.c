/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.beharrahala@learner  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:53:58 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/26 22:03:12 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else if (nbr >= 0)
		ft_putchar_fd(nbr + '0', fd);
	else
	{
		if (nbr == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
		}
		else
		{
			ft_putchar_fd('-', fd);
			nbr = -nbr;
			ft_putnbr_fd(nbr, fd);
		}
	}
}
