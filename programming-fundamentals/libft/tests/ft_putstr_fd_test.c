/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.beharrahala@learner  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:02:52 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/26 21:03:59 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr_fd_test(void)
{
	ft_putstr_fd("\n - ft_putstr_fd(): ", 1);
	char	*str;

	str = "Lycee Jean Perrin";
	ft_putstr_fd(str, 1);
}
