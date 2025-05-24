/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:01:12 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/24 14:06:06 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// fill first n bytes of memory area pointed by s with constant byte c
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	if (!s)
		return (NULL);
	temp = (unsigned char *)s;
	while (n-- > 0)
		*temp++ = (const unsigned char)c;
	return (s);
}
