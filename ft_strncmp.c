/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:37:22 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 09:31:43 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0 && (*s1 || *s2))
	{
		if (*s1 - *s2)
			return ((unsigned char)(*s1 - *s2));
		s1++;
		s2++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "";
	char	*s2 = "ab";
	int		n = 3;
	int		cmp = ft_strncmp(s1, s2, n);

	if (!cmp)
		printf("\"%s\" matches with \"%s\" at first %d byte", s1, s2, n);
	else
		printf("\"%s\" and \"%s\" are different at first %d byte", s1, s2, n);
}
*/
