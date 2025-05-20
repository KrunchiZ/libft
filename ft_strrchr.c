/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:20:43 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/20 11:23:42 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// look for last occurrence of c in s
char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	*temp;

	temp = (char *)s;
	last = NULL;
	while (*temp)
	{
		if (*temp == c)
			last = temp;
		temp++;
	}
	if (*temp == c)
		last = temp;
	return (last);
}
