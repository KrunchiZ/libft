/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:56:25 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 09:53:20 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	if (src == NULL)
		return (srclen);
	while (src[srclen] != '\0')
		srclen++;
	if (dest == NULL || size == 0)
		return (srclen);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

/*
#include <stdio.h>
int	main(void)
{
	char		dest[5] = "DEST";
	const char	*src;
	size_t		len;

	src = "0123456789";
	printf("src = \"%s\"\ndest = \"%s\"\n", src, dest);
	len = ft_strlcpy(dest, src, 5);
	printf("new dest = \"%s\"\nNote: src length = %lu", dest, len);
	return (0);
}
*/
