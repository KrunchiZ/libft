/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:22:11 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/20 12:15:00 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// look for c in s for the first n bytes
// return NULL if nothing is found
void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0 && *tmp)
	{
		if (*tmp == (unsigned char)c)
			return ((void *)tmp);
		tmp++;
		n--;
	}
	if (n && *tmp == (unsigned char)c)
		return ((void *)tmp);
	return (NULL);
}
