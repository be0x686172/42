/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.beharrahala@learner  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:33:25 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/26 21:01:34 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft_tester.h"

void	ft_putchar_fd_test(void)
{
	ft_putstr_fd("\n - ft_putchar_fd(): ", 1);
	char	c;

	c = 'D';
	ft_putchar_fd(c, 1);
}
