/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.beharrahala@learner  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:51:01 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/28 13:44:53 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft_tester.h"

int	main(void)
{
	system("clear");

	printf("██     ▄▄ ▄▄▄▄  ▄▄▄▄▄ ▄▄▄▄▄▄");
    printf("\n██     ██ ██▄██ ██▄▄    ██");
    printf("\n██████ ██ ██▄█▀ ██      ██");
	printf("\n\nby Abderahmane Behar Rahala alias be0x686172.");

	printf("\n\n| ＳＴＡＲＴ  ＯＦ  ＴＥＳＴＩＮＧ |\n");

	ft_putchar_fd_test();
	ft_putstr_fd_test();
	ft_putnbr_fd_test();
	ft_strlen_test();

	printf("\n\n| ＥＮＤ  ＯＦ  ＴＥＳＴＩＮＧ |");

	printf("\n\n");
	return (0);
}
