/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:39:07 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/19 11:08:38 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//return 1 if c is ascii alphabet letters
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isalpha(*(argv[1])))
			printf("yes");
		else
			printf("no");
	}
	return (0);
}
*/
