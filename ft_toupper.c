/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:04:15 by kchiang           #+#    #+#             */
/*   Updated: 2025/05/21 17:28:05 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert lowercase to uppercase
int	ft_toupper(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return ((int)ch);
}
