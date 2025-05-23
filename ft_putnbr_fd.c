/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:15:31 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/23 11:53:49 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	exec_ft_putnbr_fd(int n, int fd, int is_neg, int depth)
{
	char	nbr[12];

	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	nbr[depth] = '\0';
	while (n)
	{
		nbr[--depth] = n % 10 + '0';
		n /= 10;
	}
	if (is_neg)
		nbr[--depth] = '-';
	ft_putstr_fd(&nbr[depth], fd);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		ft_putstr_fd("0", fd);
	else if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else
		exec_ft_putnbr_fd(n, fd, 0, 11);
	return ;
}
