/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:50:20 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/19 11:56:51 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is ascii alphabet letter or digit character
int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isalnum(*(argv[1])))
			printf("yes");
		else
			printf("no");
	}
	return (0);
}
