/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:11:14 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/20 19:27:01 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* duplicate a string using malloc then return it */
char	*ft_strdup(const char *src)
{
	char	*host;
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	host = (char *)malloc(len + 1);
	if (host == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		host[i] = src[i];
		i++;
	}
	host[i] = '\0';
	return (host);
}

/*
int	main(int argc, char **argv)
{
	char	*dup;

	if (argc != 2)
		return (0);
	dup = ft_strdup(argv[1]);
	if (dup == NULL)
		printf("Malloc failed");
	else
	{
		printf("Copied: \"%s\"\n", dup);
		free(dup);
	}
	return (0);
}
*/
