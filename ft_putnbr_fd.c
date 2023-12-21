/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:59:33 by hassaleh          #+#    #+#             */
/*   Updated: 2023/12/10 21:57:51 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putchar_fd ('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n = n * -1;
	}
	if (n < 10)
	{
		n = n + 48;
		write (fd, &n, 1);
		return ;
	}
	else
		ft_putnbr_fd (n / 10, fd);
	ft_putnbr_fd (n % 10, fd);
}
