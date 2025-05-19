/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:50:20 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/19 12:05:52 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a 7-bit ascii character
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
