/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:39:26 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 17:27:07 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a digit character
int	ft_isdigit(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isdigit(*(argv[1])))
			printf("yes");
		else
			printf("no");
	}
	return (0);
}
*/
