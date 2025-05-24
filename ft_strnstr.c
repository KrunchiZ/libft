/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:07:07 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/24 13:52:31 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* locate a little substring in big */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lil_len;

	if (!big)
		return (NULL);
	lil_len = ft_strlen(little);
	if (lil_len == 0)
		return ((char *)big);
	while (len > 0 && *big)
	{
		if (len < lil_len)
			return (NULL);
		if (ft_strncmp(big, little, lil_len) == 0)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
