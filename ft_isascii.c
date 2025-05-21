/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:50:20 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 17:26:46 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a 7-bit ascii character
int	ft_isascii(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 0 && ch <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isascii(*(argv[1])))
			printf("yes");
		else
			printf("no");
	}
	return (0);
}
*/
