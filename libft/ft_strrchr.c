/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:20:43 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/24 13:57:02 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// look for last occurrence of c in s
char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	if (!s)
		return (last);
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		last = (char *)s;
	return (last);
}
