/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:56:25 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/19 19:35:05 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;

	srclen = 0;
	if (src == NULL)
		return (srclen);
	while (src[srclen] != '\0')
		srclen++;
	if (dest == NULL || size == 0)
		return (srclen);
	dest[size] = '\0';
	while (--size >= 0)
		dest[size] = src[size];
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
	printf("new dest = \"%s\"\nNote: src length = %u", dest, len);
	return (0);
}
*/
