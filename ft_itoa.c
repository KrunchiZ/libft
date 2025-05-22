/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:53:30 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/22 16:09:10 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	tmp[12];
	int		depth;
	int		is_neg;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	is_neg = 0;
	depth = 12;
	tmp[--depth] = '\0';
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	while (n)
	{
		tmp[--depth] = n % 10 + '0';
		n /= 10;
	}
	if (is_neg)
		tmp[--depth] = '-';
	return (ft_strdup(&tmp[depth]));
}
