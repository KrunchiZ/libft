/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:53:30 by kchiang           #+#    #+#             */
/*   Updated: 2025/06/08 21:43:31 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convert unsigned long long integer to a new base system and
 * return it as a string.
 * */
static char	*init_uitoa_base(t_ullong nbr, const char *base, size_t base_len)
{
	char	tmp[64];
	int		depth;

	is_neg = 0;
	depth = 63;
	tmp[depth] = '\0';
	tmp[62] = base[0];
	if (nbr == 0)
		return (ft_strdup(&tmp[62]));
	while (nbr)
	{
		tmp[--depth] = base[nbr % base_len];
		nbr /= base_len;
	}
	return (ft_strdup(&tmp[depth]));
}

/* Using bit masking technique to check if there is any duplicate
 * characters in base.
 * While iterating base, if the array member of respective base char is already
 * turned to TRUE, duplicate is present.
 * Else, return 0 if no dup.
 * */
static int	base_has_dup(const char *base)
{
	unsigned char	ch[256];

	ft_bzero(ch, 256);
	while (base && *base)
	{
		if (ch[(int)*base])
			return (1);
		ch[(int)*base++] = 1;
	}
	return (0);
}

/* ft_strlen to determine the base system of base string.
 * If base length is less than 2, base system is invalid, return NULL.
 * Else, init_itoa_base.
 * */
char	*ft_uitoa_base(t_ullong nbr, const char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2 || base_has_dup(base))
		return (NULL);
	return (init_uitoa_base(nbr, base, base_len));
}
