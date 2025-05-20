/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:20:43 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/20 11:01:38 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	temp = (char *)s;
	while (*temp)
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	if (*temp == c)
		return (temp);
	return (NULL);
}
