/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:37:22 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 17:33:08 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (n-- > 0 && (*tmp1 || *tmp2))
	{
		if (*tmp1 - *tmp2)
			return (*tmp1 - *tmp2);
		tmp1++;
		tmp2++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "test";
	char	*s2 = "testss";
	int		n = 7;
	int		cmp = ft_strncmp(s1, s2, n);

	if (!cmp)
		printf("\"%s\" matches with \"%s\" at first %d byte", s1, s2, n);
	else
		printf("\"%s\" and \"%s\" are different at first %d byte", s1, s2, n);
}
*/
