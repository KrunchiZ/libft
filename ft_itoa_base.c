/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:53:30 by kchiang           #+#    #+#             */
/*   Updated: 2025/06/08 18:34:24 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convert long long integer to a new base system and return it as a string.
 * */
static char	*init_itoa_base(long long nbr, const char *base, size_t base_len)
{
	char	tmp[64];
	int		depth;
	int		is_neg;

	is_neg = 0;
	depth = 63;
	tmp[depth] = '\0';
	tmp[62] = base[0];
	if (nbr == 0)
		return (ft_strdup(&tmp[62]));
	if (nbr < 0)
	{
		is_neg = 1;
		nbr = -nbr;
	}
	while (nbr)
	{
		tmp[--depth] = base[nbr % base_len];
		nbr /= base_len;
	}
	if (is_neg)
		tmp[--depth] = '-';
	return (ft_strdup(&tmp[depth]));
}

/* ft_strlen to determine the base system of base string.
 * If base length is less than 2, base system is invalid, return NULL.
 * Else, init_itoa_base.
 * */
char	*ft_itoa_base(long long nbr, const char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return (NULL);
	return (init_itoa_base(nbr, base, base_len));
}
