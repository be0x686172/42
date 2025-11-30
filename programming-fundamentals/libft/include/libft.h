/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abehar-r <abderahmane.beharrahala@learner  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:19:14 by abehar-r          #+#    #+#             */
/*   Updated: 2025/11/26 21:15:56 by abehar-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putchar_fd_test(void);

void	ft_putstr_fd(char *str, int fd);
void	ft_putstr_fd_test(void);

void	ft_putnbr_fd(int nbr, int fd);
void	ft_putnbr_fd_test(void);

#endif
