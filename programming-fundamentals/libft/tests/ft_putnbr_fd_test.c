/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.beharrahala@learner  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:01:11 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/26 22:04:23 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr_fd_test(void)
{
	ft_putstr_fd("\n - ft_putnbr(): ", 1);
	int	nbr;

	nbr = 42;
	ft_putnbr_fd(nbr, 1);
}
