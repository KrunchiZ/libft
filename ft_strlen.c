/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:54:07 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/19 15:23:17 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stblib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		size_t	len = ft_strlen(argv[1]);
		printf("length = %lu", len);
	}
	return (0);
}
*/
