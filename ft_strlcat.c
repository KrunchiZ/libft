/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:12:01 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/20 19:28:32 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// replicating strlcat
// concatenate src to dest without causing overflow
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (dest_len + i < size - 1)
	{
		if (*src)
			dest[dest_len + i++] = *src++;
		else
			break ;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*src = "abc";
	char	dest[10] = "012345";
	size_t		n = 8;
	size_t		length;

	printf("\"%s\" + \"%s\"\n", dest, src);
	length = ft_strlcat(dest, src, n);
	printf("=> \"%s\", returned length = %d", dest, length);
	return (0);
}
*/
