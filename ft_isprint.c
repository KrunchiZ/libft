/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:54:23 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/19 14:01:08 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is printable ascii character
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isprint(*(argv[1])))
			printf("yes");
		else
			printf("no");
	}
	return (0);
}
*/
