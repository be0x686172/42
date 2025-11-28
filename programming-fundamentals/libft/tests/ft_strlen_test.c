/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.beharrahala@learner  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:42:25 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/28 13:46:55 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft_tester.h"

void	ft_strlen_test(void)
{
	ft_putstr_fd("\n - ft_strlen(): ", 1);
	char	*str;
	size_t	len;

	str = "Jean Perrin High School";
	len = ft_strlen(str);
	ft_putnbr_fd((int)len, 1);
}
