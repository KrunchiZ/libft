/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:53:30 by kchiang           #+#    #+#             */
/*   Updated: 2025/06/09 15:42:34 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convert integer to a string */
char	*ft_uitoa(t_ullong nbr)
{
	char	tmp[21];
	int		depth;

	depth = 20;
	tmp[depth] = '\0';
	tmp[19] = '0';
	if (nbr == 0)
		return (ft_strdup(&tmp[19]));
	while (nbr)
	{
		tmp[--depth] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (ft_strdup(&tmp[depth]));
}
