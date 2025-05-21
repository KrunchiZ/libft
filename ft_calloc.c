/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:10:40 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 10:25:25 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* allocate memory for nmemb elements with size bytes each */
/* if nmemb or size is 0, return a unique pointer */
/* if nmemb * size > ULONG_MAX, return NULL */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*host;

	if ((ULONG_MAX / nmemb) < size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		host = malloc(1);
		if (host == NULL)
			return (NULL);
		return (host);
	}
	host = malloc(nmemb * size);
	if (host == NULL)
		return (NULL);
	ft_memset(host, 0, nmemb * size);
	return (host);
}
