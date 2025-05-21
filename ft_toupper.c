/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:04:15 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 22:08:08 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert lowercase to uppercase
int	ft_toupper(int c)
{
	unsigned char	ch;

	c = (unsigned char)c;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
